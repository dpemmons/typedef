#!/usr/bin/bash

## A temporary script useful during development...
if [ ! -f ".typedef_root" ]; then
    echo ".typedef_root does not exist. Are you running this script from the project root?"
    exit 1
fi

set -xe

make -j6
./build/debug/typedef libtypedef/codegen/codegen_cpp.td --cpp_out libtypedef/codegen
make clean
CXXFLAGS="-DSELF_HOSTED_CODEGEN=1" make -j6
./build/debug/typedef --self_hosted_codegen libtypedef/codegen/codegen_cpp.td --cpp_out libtypedef/codegen
make clean
CXXFLAGS="-DSELF_HOSTED_CODEGEN=1" make -j6

cd examples
make clean
make
../build/debug/examples/template
