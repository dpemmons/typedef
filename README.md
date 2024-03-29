# typedef

[![C/C++ CI](https://github.com/dpemmons/typedef/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/dpemmons/typedef/actions/workflows/c-cpp.yml)

Typedef is a statically typed data declaration language and code generator, intended for interface definition, data serialization, and string templating. It compiles to C++ (with other languages planned).

The language is ***in active development***; the gramamr is stabilizing but still incomplete and may change. Code generation is incomplete. Docs are very incomplete. As are tests. It may not compile. It will probably eat your homework.

A [Visual Studio Code](https://code.visualstudio.com/) extension for syntax highlighting is [available here](https://github.com/dpemmons/typedef-vscode).

## Documentation

* For Users:
  * [Types](./docs/types.md)
  * [String Templates](./docs/string_templates.md)
* For Contributors:
  * [Coding Conventions](./docs/CONVENTIONS.md)
  * [Architecture](./docs/ARCHITECTURE.md)
  * [Ideas / notes](./docs/ideas.md)

## TODO

Items in ***bold*** are in-progress.

* [ ] **string templates**
  * [ ] inside-out mode?
  * [ ] configurable opening / closing strings
    * [ ] formatting
  * [ ] comments
  * [ ] boolean logic expressions (ie "and" and "or" expressions)
  * [ ] call template functions from others with literal arguments
* [ ] tests
* [ ] generated cpp features (probably after template engine)
  * [ ] pretty print methods
  * [ ] comparison operators
  * [ ] prevent keyword collision (like protoc? <https://protobuf.dev/reference/cpp/cpp-generated/#generated-filenames>)
  * [ ] prevent unbounded recursion of generated template functions?
* [ ] more types
  * [ ] onordered set type? (does it make sense?)
  * [ ] Foundational
    * [ ] fixed length arrays
    * [ ] message
    * [ ] enum
  * [ ] Features
    * [ ] dates
    * [ ] IPv4 and IPv6 addresses
    * [ ] domain names
    * [ ] paths
    * [ ] TODO: look up postgres types for inspiration
* [ ] better build system (meson?)
* [ ] more literals
  * [ ] byte literals
  * [ ] byte strings
  * [ ] raw byte strings

Done moved here (and then eventually deleted):

* [x] actually resolve symbols, and make SymRef's point to their symbols.
* [x] fix unique_ptr for vectors, maps, etc.
* [x] inline types: structs, vectors, maps.
* [x] nested types
* [x] consider making cpp codegen more sane?
* [x] pitchfork repo layout
* [x] separate type declaration from field, value, etc. declaration
* [x] make symbol references independent of declaration order
* [x] tests: literals... (clear out /old)
* [x] required fields (grammar)

string templates

* [x] simple replacement
* [x] if/then, for (vector and map)
* [x] type checking
* [x] type checking tests
* [x] subtemplates
* [x] escape sequences
* [x] variants: switch statements
* [x] built-in functions: first() last() etc.

code generation

* [x] self-hosting!
* [x] JSON rendering
* [x] defaults
