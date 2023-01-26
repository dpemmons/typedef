#!/usr/bin/bash

# stop immediately if there is an error
set -o errexit

/usr/bin/antlr4 -Dlanguage=Cpp -o ./gen ./Typedef.g4
