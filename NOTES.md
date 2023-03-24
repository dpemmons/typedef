# Typdedef Development Notes

## TODO

Items in ***bold*** are in-progress.

- [ ] Basics (build and lib)
  - [x] change over to using normal VS.Code tasks, instead of makefile extension.
  - [x] build parser with makefile
  - [x] Use error matching in unit tests
  - [x] proper(ish) debug makefile targets
  - [ ] parse module import statements
  - [ ] ***parse simple value statements***
  - [ ] parse a very basic struct statement
  - [ ] ***Idea to experiment with: basing lexer (and part of parser) on the available Rust grammars?***

- [ ] Command line util basics
  - [ ] print default formatting to stdout
  - [ ] write and read a baisc serialized blob, and print to stdout
  - [ ] print a basic struct ito json stdout
  - [ ] input json to basic struct

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
