# typedef

Typedef is a statically typed data declaration language, intended for interface definition and generation, data serialization, and string templating. It compiles to C++ (with other languages planned).

The language is ***in active development***; the gramamr is stabilizing but still incomplete and may change. Code generation is very incomplete.

## Documentation (Incomplete, In-Progress)

* [Types](./docs/types.md)
  * [Template String Templating Engine](./docs/template_strings.md)
* [Typedef Coding Conventions](./docs/conventions.md)
* [Architecture](./docs/architecture.md)

## TODO List

Items in ***bold*** are in-progress.

* [ ] **string templates**
  * [ ] type checking tests
  * [ ] configurable opening / closing strings
    * [ ] formatting
  * [ ] subtemplates
  * [ ] comments
  * [ ] escape delimiters
  * [ ] prevent unbounded recursion
* [ ] tests...
* [ ] code generation
  * [ ] escape reserved words like protoc: <https://protobuf.dev/reference/cpp/cpp-generated/#generated-filenames>
* [ ] more types
  * [ ] optionals
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
* [ ] meson build system
* [ ] more literals
  * [ ] byte literals
  * [ ] byte strings
  * [ ] raw byte strings
* [ ] set type? (does it make sense?)
* [ ] raw identifiers (do they just work?)
* [ ] generated cpp features (probably after template engine)
  * [ ] move semantics
  * [ ] print methods
  * [ ] comparison operators
  * [ ] prevent keyword collisions

Done moved here (and then eventually deleted):

* [x] actually resolve symbols, and make SymRef's point to their symbols.
* [x] fix unique_ptr for vectors, maps, etc.
* [x] inline types: structs, vectors, maps.
* [x] nested types
* [x] consider making cpp codegen more sane?
* [x] pitchfork repo layout
* [x] separate type declaration from field, value, etc. declaration
* [x] make symbol references independent of declaration order

string templates

* [x] simple replacement
* [x] if/then, for (vector and map)
* [x] type checking
