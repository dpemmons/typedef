# Types

- [Types](#types)
  - [Bool Type](#bool-type)
  - [Numeric Types](#numeric-types)
    - [Floats](#floats)
    - [Integers](#integers)
  - [Date/Time Types](#datetime-types)
    - [Timestamp](#timestamp)
    - [Date](#date)
    - [Time](#time)
    - [Duration](#duration)
  - [Network Address Types](#network-address-types)
  - [UUID Type](#uuid-type)
  - [Semantic Version (SemVer)](#semantic-version-semver)
  - [Path](#path)
  - [Character / String Types](#character--string-types)
    - [Char](#char)
    - [String](#string)
    - [Template String](#template-string)
  - [Binary Data Types](#binary-data-types)
  - [Composite Types](#composite-types)
    - [Structs](#structs)
    - [Variant](#variant)
    - [Vector](#vector)
    - [Array](#array)
    - [Map](#map)
    - [Set](#set)

## Bool Type

Identifier: `bool`

Storage size: 1 byte

## Numeric Types

### Floats

| Identifier | Storage Size | Description                                                                                |
|------------|--------------|--------------------------------------------------------------------------------------------|
| `f32`      | 4 bytes      | A 32-bit floating point type (specifically, the “binary32” type defined in IEEE 754-2008). |
| `f64`      | 8 bytes      | A 64-bit floating point type (specifically, the “binary64” type defined in IEEE 754-2008). |

### Integers

| Identifier | Storage Size | Min                        | Max                        | Description                                                                                |
|------------|--------------|----------------------------|----------------------------|--------------------------------------------------------------------------------------------|
| `u8`       | 1            | 0                          | 255                        | The 8-bit unsigned integer type.                                                           |
| `u16`      | 2            | 0                          | 65_535                     | The 16-bit unsigned integer type.                                                          |
| `u32`      | 4            | 0                          | 4_294_967_295              | The 32-bit unsigned integer type.                                                          |
| `u64`      | 8            | 0                          | 18_446_744_073_709_551_615 | The 64-bit unsigned integer type.                                                          |
| `i8`       | 1            | -128                       | 127                        | The 8-bit signed integer type.                                                             |
| `i16`      | 2            | -32_768                    | 32_767                     | The 16-bit signed integer type.                                                            |
| `i32`      | 4            | -2_147_483_648             | 2_147_483_647              | The 32-bit signed integer type.                                                            |
| `i64`      | 8            | -9_223_372_036_854_775_808 | 9_223_372_036_854_775_807  | The 64-bit signed integer type.                                                            |

## Date/Time Types

*(Not yet implemented)*

### Timestamp

*(Not yet implemented)*

### Date

*(Not yet implemented)*

### Time

*(Not yet implemented)*

### Duration

*(Not yet implemented)*

## Network Address Types

*(Not yet implemented)*

## UUID Type

*(Not yet implemented)*

## Semantic Version (SemVer)

*(Not yet implemented)*

## Path

*(Not yet implemented)*

## Character / String Types

### Char

Identifier: `char`

Storage size: 4 bytes

A [Unicode Scalar Value](https://www.unicode.org/glossary/#unicode_scalar_value); occupies 4 bytes.

### String

Identifier: `str`

Storage size: variable.

A variable-length UTF-8 string.

### Template String

Identifier: `tmpl_str<T>`

Template Strings allow Typedef to be used as a strongly-typed text templating engine. See [String Templates](./template_strings.md) for more detail.

## Binary Data Types

*(Not yet implemented)*

## Composite Types

### Structs

Structs in Typedef are a basic collection type. They can hold any other type in *fields*, and are analogous to [compound data types](https://rosettacode.org/wiki/Compound_data_type) in many other languages. Their storage format is efficient but not forwards or backwards compatible with previous versions of the same struct. Eg. structs written with an 

The following example defines a struct containing three fields, of type `bool`, `char`, and `str`.

```typedef
struct StructA {
  example_bool: bool;
  example_char: char;
  example_str: str;
};
```

Struct definitions may be nested within other structs:

```typedef
struct StructA {
  example_bool: bool;
  example_char: char;
  example_str: str;

  struct NestedStruct {
    a: i32;
  };
  nestedStructField: NestedStruct;
};
```

They may also be declared anonymously:

```typedef
struct StructA {
  example_bool: bool;
  example_char: char;
  example_str: str;

  inlineStruct: struct {
    a: i32;
  };
};
```

### Variant

Variants are syntactically identical to structs, but may only hold one field at a time. They're analogous to [tagged unions](https://en.wikipedia.org/wiki/Tagged_union) in other languages.

```typedef
// Holds EITHER a or b.
variant VariantA {
  a: bool;
  b: i8;
};
```

### Vector

Vectors are ordered, variable-length collections of any other type.

```typedef
vector VecOfBools<bool>;

// may hold an arbitrary number of StructA's.
vector VecOfStructA<StructA>;

// Inline is ok too.
struct StructC {
  some_vec: VecOfBools<bool>;
};
```

### Array

*(Not yet implemented)*

Arrays are fixed-length collections of any other type.

### Map

An [associative array](https://en.wikipedia.org/wiki/Associative_array) type that maps a [primitive type](#primitive-types) to any other type.

```typedef
// Declaration
map MapA<i32, StructA>;

struct StructB {
  some_map: MapA;
};

// Inline is ok too.
struct StructC {
  some_map: MapA<i32, StructA>;
};
```

### Set

*(Not yet implemented)*

A set is a collection of elements, without duplicates and without order.
