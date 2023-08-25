BUILD := debug
COMPILER=clang

# Inspired by https://stackoverflow.com/a/48793058
# https://stackoverflow.com/questions/48791883/best-practice-for-building-a-make-file/48793058#48793058

CXX.gcc := /usr/bin/g++
CC.gcc := /usr/bin/gcc
LD.gcc := /usr/bin/g++
AR.gcc := /usr/bin/ar

CXX.clang := /usr/bin/clang++
LD.clang := /usr/bin/clang++
AR.clang := /usr/bin/ar

CXX := ${CXX.${COMPILER}}
LD := ${LD.${COMPILER}}
AR := ${AR.${COMPILER}}

CXXFLAGS.gcc.debug := -DDEBUG -gdwarf-2 -O0 -fstack-protector-all
CXXFLAGS.gcc.release := -O3 -march=native -DNDEBUG
CXXFLAGS.gcc := -pthread \
                -std=gnu++17 \
                -march=native \
                -g \
                -MMD \
                -MP \
                -fmessage-length=0 \
                -fdiagnostics-show-template-tree \
                -fdiagnostics-color=auto \
                -fdiagnostics-generate-patch \
                ${CXXFLAGS.gcc.${BUILD}}

CXXFLAGS.clang.debug := -DDEBUG -O0 -fstack-protector-all
CXXFLAGS.clang.release := -O3 -march=native -DNDEBUG
CXXFLAGS.clang := -pthread \
                  -std=gnu++17 \
                  -march=native \
                  -gdwarf-4 \
                  -MMD \
                  -MP \
                  -fmessage-length=0 \
                  -Wno-defaulted-function-deleted \
                  ${CXXFLAGS.clang.${BUILD}}

CXXFLAGS := ${CXXFLAGS.${COMPILER}}
CFLAGS := ${CFLAGS.${COMPILER}}

LDFLAGS.debug := -O0 -gdwarf-4
LDFLAGS.release :=
LDFLAGS := -fuse-ld=lld -pthread ${LDFLAGS.${BUILD}}
LDLIBS := -ldl

CATCH2_LIB_HEADERS := ${CURDIR}/external/catch2-3.3.1
CLI_LIB_HEADERS := ${CURDIR}/external/CLI-2.3.2
FMT_LIB_HEADERS := ${CURDIR}/external/fmtlib-9.1.0
ANTLR4_LIB_HEADERS := ${CURDIR}/external/antlr4-runtime-4.7.2 ${CURDIR}/external/antlr4-runtime-4.7.2/antlr4
JSON_LIB_HEADERS := ${CURDIR}/external/nlohmann-json-3.11.2/json/include
INJA_LIB_HEADERS := ${CURDIR}/external/inja-3.4.0/inja/include