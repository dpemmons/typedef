# TODO

Items in ***bold*** are in-progress.

- [ ] string templates
  - [ ] configurable opening / closing strings
    - [ ] formatting
  - [ ] type checking
  - [ ] subtemplates
  - [ ] comments
  - [ ] escape delimiters
  - [ ] prevent unbounded recursion
- [ ] tests...
- [ ] more types
  - [ ] optionals
  - [ ] Foundational
    - [ ] fixed length arrays
    - [ ] message
    - [ ] enum
  - [ ] Features
    - [ ] dates
    - [ ] IPv4 and IPv6 addresses
    - [ ] domain names
    - [ ] paths
    - [ ] TODO: look up postgres types for inspiration
- [ ] meson build system
- [ ] more literals
  - [ ] byte literals
  - [ ] byte strings
  - [ ] raw byte strings
- [ ] set type? (does it make sense?)
- [ ] raw identifiers (do they just work?)
- [ ] generated cpp features (probably after template engine)
  - [ ] move semantics
  - [ ] print methods
  - [ ] comparison operators
  - [ ] prevent keyword collisions

Done moved here:

- [x] actually resolve symbols, and make SymRef's point to their symbols.
- [x] fix unique_ptr for vectors, maps, etc.
- [x] inline types: structs, vectors, maps.
- [x] nested types
- [x] consider making cpp codegen more sane?
- [x] pitchfork repo layout
- [x] separate type declaration from field, value, etc. declaration
- [x] make symbol references independent of declaration order

string templates
- [x] simple replacement
- [x] if/then, for (vector and map)
