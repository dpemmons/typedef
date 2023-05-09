BUILD := debug
COMPILER=gcc

CXXFLAGS.gcc.debug := -DDEBUG -g3 -ggdb -Og -fstack-protector-all
CXXFLAGS.gcc.release := -O3 -march=native -DNDEBUG
CXXFLAGS.gcc := -pthread -std=gnu++17 -march=native -g -MMD -MP -fmessage-length=0 ${CXXFLAGS.gcc.${BUILD}}

CXXFLAGS.clang.debug := -O0 -fstack-protector-all
CXXFLAGS.clang.release := -O3 -march=native -DNDEBUG
CXXFLAGS.clang := -pthread -std=gnu++17 -march=native -g -MMD -MP -fmessage-length=0 ${CXXFLAGS.clang.${BUILD}}

CXXFLAGS := ${CXXFLAGS.${COMPILER}}
CFLAGS := ${CFLAGS.${COMPILER}}

LDFLAGS.debug := -ggdb3
LDFLAGS.release :=
LDFLAGS := -fuse-ld=gold -pthread -g ${LDFLAGS.${BUILD}}
LDLIBS := -ldl
