# Conventions

## Style Guide

This project aspirationally follows the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) with the following modifications:

- C++ Exceptions are allowed; this is largely to simplify compatibility with ANTLR4.

## Repository Layout

The project structure used here comes from The C++ Standards Committee's [Canonical Project Structure](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p1204r0.html) proposal. The [Pitchfork Layout](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs) is also influential.

| **Folder**                        | **Purpose** |
|-----------------------------------|-------------|
| `build`                           | Build artifacts. Not checked in. |
| [`docs`](../docs)                 | This folder contains documentation. |
| [`examples`](../examples/)        | Contains example typedef files and the resulting C++ code that the typedef tool generates for them. |
| [`external`](../external/)        | Contains third-party libraries used by the project. |
| [`libtypedef`](../libtypedef/)    | A statically linked library that implements most of the functionality of the language. |
| [`tests`](../tests/)              | Contains integration tests. |
| [`tools`](../tools)               | Contains tools useful for people developing the language or otherwise using the project. |
| [`typedef`](../typedef/)          | Contains sources specific to the typedef command line tool. |
