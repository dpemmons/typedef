typedef-alpha;

// Files parse to a set of types and values.
// (meaning sets need to be able to handle both? Are types values? I guess so...)
// Curly brackets contain sets and blocks. Square brackets contain ordered sets (arrays).

// Aliases i32 to SomeType.
SomeType: i32;

//
// TypeIdentifier: TypeDefinition = ConcreteValue;
//

SomeStruct: struct {

};

SomeGenericStruct: struct<T> {
  someMember: T;
};
SomeGenericI32Struct: SomeGenericStruct<i32>;

SomeMessage: message {
  a: i32;
  b: i64;
};

SomeMessage: message<T: Any> {
  // does not save whether it's been set.
  // if someValue is not provided, 
  someMember: T = someValue;

  // must be explictely set by the constructor.
  // defaultValue can be set via setDefault();
  someRequiredMember: required<T> = defaultValue;

  // saves whether this value was explitely set
  // during construction.
  someOptionalMember: optional<T> = defaultValue;
  someUnsetOptionalMember: optional<T> = undefined; // "undefined" here is redundant


  // some static value
  someStaticMember: static<T> = staticValue;

  // some constant value
  someConstValue: const<T> = defaultValue;

  someMessageValeu: SomeMessage = {a: 2, b: 3};
};

SomeMessageDefinition = SomeMessage<i32> {
  someMember: 3,
  someRequiredMember: 2,
  someConstValue: 1,
  someMessageValeu: {a: 4, b: 5}
}

SomeServiceDefinition: 

// methods may return either values or types.
// methods that return types, take arguments within angled
// brackets like: someTypeGenerator<arg1, arg2>
// methods that return values take arguments within
// parenthesis:
// someFunction(arg1, arg2).
// type assignment happens with semicolons
// value assignment with equals

array: blah<T: Any, sz: u32>;
int32: integer<Bits: integer>;

SomeInt32Array: array<i32>;
SomeFixedInt32Array: array<i32, 3> = [1, 2, 3];
SomeOptionalFixedInt32Array: optional<array<i32,3>> = [1, 2, 3];

// square brackets are used to provide a list of values for an array.

// curly brackets are used to denote blocks
// - field delcarations
// - namespace contents
// - 

// An enum in which members can be of any type.
SomeEnumType: enum<i32> {

};

// Interesting question here... at some point we'll create
// types with user-specified constraints. Eg. something like
SomeLimitedType: u32: gt(5);
SomeOtherType: Something<T: Any>;
// questions:
// 1) how do we specify those limitations?
// 2) can we use a similar mechansim to restrict generics?
// thoughts: https://typesanitizer.com/blog/zig-generics.html
// seems Rust style traits are useful here.


// An enum in which members are of the type specified between
// angled brackets.
SomeEnumI32Type: variant<T: Any> {
  CaseA: T,
  CaseB: int32 = 2,
  CaseC: struct {x:i32, y:i16} = (),
};

SomeRPC: rpc(someArg: SomeEnum) -> SomeStruct;
SomeRPC: rpc(someArg: SomeEnum) -> None;
SomeFunc: function(someArg: SomeEnum) -> SomeVal;


// Options for forwards comaptibility:
// 


MessageV0: message {
  fieldA: i32;
  fieldB: i64;
}

MessageV1: message {
  fieldA: i32;
  fieldB: i64;
  newFieldC: string;
}

MessageV2: message {
  // fieldA removed
  fieldB: i64;
  newFieldC: string
}

// A binary compiled with V0 should be able to ignore a message containing newFieldC and
// use a default for fieldA if it doesn't exist.

// A binary compiled with V1 should be able to read V0 and ignore fieldA and use a default for newFieldC.

// How do you achieve this in the binary format?

// Option 1:
// The RPC system can know about the various versions and automatically convert between them.
//   * for this to work, a file or program always needs provide a maniftest of its known types
//     and the thing that reads them needs to be able to generate conversion logic. The conversion
//     logic may be either interpreted or compiled (probably just a lookup table?)
//   - a problem with this is sometimes we'll want to pass data through a process to another
//     behind it, but that's probably best done with a handle of some sort?
//   * also, how to handle streams of data? probably also a handle?
// Option 2:
// Provide a data lookup table within the message.
//   + should work everywhere
//   - burdens everyone with the cost of indirect lookups, even the (should be) common case in which
//     proceses that speak the same message version talk to each other.
//   + passing opaque data through should work fine (unless the process in the middle stomps on it)
// 
// I think I like Option 1 because it separates interface definitions from wire format specifics
// and lets us punt for a bit on the details of how the opaque translation will actually happen.
// Also one can imagine a DSL that specifies how to convert message types, which could be extended
// to other serialziation formats. Eg. json -> typedef.
// 
// Separately, the system needs handles for:
//   * Opaque data buffers
//   * streams
//   * services
//   * methods on services
