#!/usr/bin/bash

## A temporary script useful during development...
if [ ! -f ".typedef_root" ]; then
    echo ".typedef_root does not exist. Are you running this script from the project root?"
    exit 1
fi

set -xe

make -j6

cd examples
make clean
make example-template
../build/debug/examples/template
