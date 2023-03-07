# TODO

- [ ] Basics (build and lib)
  - [x] change over to using normal VS.Code tasks, instead of makefile extension.
  - [ ] parse module import statements
  - [ ] parse a very basic struct statement
  - [ ] Idea to experiment with: basing lexer (and part of parser) on the available Rust grammars?

- [ ] Command line util basics
  - [ ] print default formatting to stdout
  - [ ] write and read a baisc serialized blob, and print to stdout
  - [ ] print a basic struct ito json stdout
  - [ ] input json to basic struct

Command line utility should, by default print out all the parts of the parsed file.
Modes:

- print default formatting
- print to json
