# typedef

Typedef is a data serizliation, interface definition and configuration language, designed with the following goals in mind:

- fast and efficient encoding that minimizes data copying
- strong typing
- forwards and backwards compatibility of serialized messages


## Building typedef

Building typedef uses simple make files.

### On Linux

With debug symbols:

```sh
make CXXFLAGS='-g'
```

Release build:

```sh
make CXXFLAGS='-O2'
```

Add `-j` to either for a faster parallel build on multicore machines:

Debug:

```sh
make -j CXXFLAGS='-g'
```

Release:

```sh
make -j CXXFLAGS='-O2'
```

And of course, clean:

```sh
make clean
```
