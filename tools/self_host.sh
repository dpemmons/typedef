#!/usr/bin/bash

## A temporary script useful during development...
if [ ! -f ".typedef_root" ]; then
    echo ".typedef_root does not exist. Are you running this script from the project root?"
    exit 1
fi

set -xe

## Step 1: build without new code and save off that binary.
make clean
make -j6
mv build/debug/typedef build/debug/typedef-orig

## Step 2: use presumed good binary to generate new experimental template definitions
##         and then build using them.
./build/debug/typedef-orig libtypedef/codegen/experimental_codegen_cpp.td --cpp_out libtypedef/codegen
make clean
CXXFLAGS="-DUSE_EXPERIMENTAL_CPP_CODEGEN=1" make -j6

## Step 3: use the experimental template definitions to generate a new experimetnal C++.
./build/debug/typedef libtypedef/codegen/experimental_codegen_cpp.td --experimental_cpp_out libtypedef/codegen

cd examples
make clean
make
../build/debug/examples/template
