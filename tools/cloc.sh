#!/bin/sh

# set working directory to that of the script.
cd "$(dirname "$0")"

cloc . --fullpath --not-match-d "(lib/antlr4|lib/fmt|lib/grammar|test/catch2|cmd/CLI)"
