#!/usr/bin/bash

## A temporary script useful during development...
if [ ! -f "Makefile" ]; then
    echo "Makefile does not exist. Are you running this script from the project path?"
    exit 1
fi

set -xe

make -j6

./build/debug/typedef ./examples/template.td --cpp_out=/tmp

clang++ -o /tmp/test.o -I./include -c /tmp/template_example.cpp