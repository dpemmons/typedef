# typedef

Typedef is a statically typed data declaration language and code generator, intended for interface definition, data serialization, and string templating. It compiles to C++ (with other languages planned).

The language is ***in active development***; the gramamr is stabilizing but still incomplete and may change. Code generation is incomplete. Docs are very incomplete. As are tests. It may not compile. It will probably eat your homework.

## Documentation (Incomplete, In-Progress)

* [Types](./docs/types.md)
  * [String Templates](./docs/template_strings.md)
* [Coding Conventions](./docs/conventions.md)
* [Architecture](./docs/architecture.md)

## TODO List

Items in ***bold*** are in-progress.

* [ ] **string templates**
  * [ ] variants (switch statements?)
  * [ ] built-in functions: first() last() etc.
  * [ ] configurable opening / closing strings
    * [ ] formatting
  * [ ] comments
  * [ ] escape delimiters
  * [ ] prevent unbounded recursion
* [ ] tests
* [ ] generated cpp features (probably after template engine)
  * [ ] pretty print methods
  * [ ] comparison operators
  * [ ] prevent keyword collision (like protoc? <https://protobuf.dev/reference/cpp/cpp-generated/#generated-filenames>)
* [ ] more types
  * [ ] optionals
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


string templates

* [x] simple replacement
* [x] if/then, for (vector and map)
* [x] type checking
* [x] type checking tests
* [x] subtemplates
