typedef=alpha;
module td::st;

// symbol reference
SymbolReference: struct {
  identifier: str;
}

// bool
MaybeBoolVal: variant {
  has_value: bool;
  val: bool;
};
BoolType: struct {
  maybe_val: MaybeBoolVal;
};

// char
MaybeCharVal: variant {
  has_value: bool;
  val: char;
};
CharType: struct {
  maybe_val: MaybeCharVal;
};

// str
MaybeStrType: variant {
  has_value: bool;
  val: str;
};
StrType: struct {
  maybe_val: MaybeStrType;
};

// f32
MaybeF32Type: variant {
  has_value: bool;
  val: f32;
};
F32Type: struct {
  maybe_val: MaybeF32Type;
};

// f64
MaybeF64Type: variant {
  has_value: bool;
  val: f64;
};
F64Type: struct {
  maybe_val: MaybeF64Type;
};

// u8
MaybeU8Type: variant {
  has_value: bool;
  val: u8;
};
U8Type: struct {
  maybe_val: MaybeU8Type;
};

// u16
MaybeU16Type: variant {
  has_value: bool;
  val: u16;
};
U16Type: struct {
  maybe_val: MaybeU16Type;
};

// u32
MaybeU32Type: variant {
  has_value: bool;
  val: u32;
};
U32Type: struct {
  maybe_val: MaybeU32Type;
};

// u64
MaybeU64Type: variant {
  has_value: bool;
  val: u64;
};
U64Type: struct {
  maybe_val: MaybeU64Type;
};

// i8
MaybeI8Type: variant {
  has_value: bool;
  val: i8;
};
I8Type: struct {
  maybe_val: MaybeI8Type;
};

// u16
MaybeI16Type: variant {
  has_value: bool;
  val: i16;
};
I16Type: struct {
  maybe_val: MaybeI16Type;
};

// u32
MaybeI32Type: variant {
  has_value: bool;
  val: i32;
};
I32Type: struct {
  maybe_val: MaybeI32Type;
};

// u64
MaybeI64Type: variant {
  has_value: bool;
  val: i64;
};
I64Type: struct {
  maybe_val: MaybeI64Type;
};

// TODO: HeaderGuard

// Local symbol tables can only contain primitives and symbol references.
// Once we allow circular dependencies, optionals, etc. we can relax this.
LocalValue: variant {

};
LocalSymbolTable: map<str, LocalValue>;

// struct
MaybeStructType: variant {
  has_value: bool;
  
};
StructType: struct {
  maybe_val: MaybeStructType;
};

// variant

// vector


Value: variant {

};

GlobalSymbolTable: map<str, Value>;
