# Typdedef Development Notes

## TODO

Items in ***bold*** are in-progress.

- [x] separate type declaration from field, value, etc. declaration
- [x] make symbol references independent of declaration order
- [ ] optionals
- [x] inline types: structs, vectors, maps.
- [ ] nested types
- [x] consider making cpp codegen more sane?
- [ ] self-host symbol table
- [ ] more types
  - [ ] fixed length arrays
  - [ ] message
  - [ ] enum
- [ ] more literals
  - [ ] byte literals
  - [ ] byte strings
  - [ ] raw byte strings
- [ ] raw identifiers (do they just work?)
- [ ] generated cpp features
  - [ ] move semantics
  - [ ] print methods
  - [ ] comparison operators

Currently using this to test...

```sh
make -j 4 debug && ./build/cmd/typedef --cpp_out=examples ./examples/simple_values.td && g++ -O0 -g examples/examples/*.cpp -o out && ./out
```

Command line utility should, by default print out all the parts of the parsed file.
Modes:

- print default formatting
- print to json

## Language Design notes

### Grammar notes and examples

- FlatBuffers: https://google.github.io/flatbuffers/flatbuffers_guide_writing_schema.html

### Compound Data Types

- https://rosettacode.org/wiki/Compound_data_type

### Generics

- Lots of good points here about the challenges with Zig-style generics: https://typesanitizer.com/blog/zig-generics.html

#### Constrained generic programming?

- https://en.wikipedia.org/wiki/Generic_programming#Constrained_genericity
- https://rosettacode.org/wiki/Constrained_genericity#Rust
- https://learn.microsoft.com/en-us/dotnet/csharp/programming-guide/generics/constraints-on-type-parameters

#### Return type polymorphism?

- https://loige.co/rust-shenanigans-return-type-polymorphism/
(does that even make sense here?)

### Type Trees

- Typescript: Every possible TypeScript Type: https://gist.github.com/laughinghan/31e02b3f3b79a4b1d58138beff1a2a89
- https://v8docs.nodesource.com/node-0.8/d1/d83/classv8_1_1_data.html
- Thinking of types as sets of values: https://learntypescript.dev/04/l8-sets-of-values
(CUE does this too.)
- Unit type? https://en.wikipedia.org/wiki/Unit_type

### Other

- Recursive Structs and Unions? https://dlang.org/spec/struct.html#recursive-types
- Handles to passthrough data?
- Actually passthrough data?

## Implementation Notes

- Try to follow Google's CPP design guide: https://google.github.io/styleguide/cppguide.html
- Useful ANTLR4 example: https://github.com/mysql/mysql-workbench/blob/8.0/modules/db.mysql.parser/src/mysql_parser_module.cpp
- https://github.com/antlr/grammars-v4/blob/master/rust/RustParser.g4
