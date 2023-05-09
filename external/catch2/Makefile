BUILD := debug
COMPILER=gcc
BASE_BUILD_DIR := ${CURDIR}/../../build/${BUILD}/external/catch2

CXXFLAGS.gcc.debug := -DDEBUG -g3 -ggdb -Og -fstack-protector-all
CXXFLAGS.gcc.release := -O3 -march=native -DNDEBUG
CXXFLAGS.gcc := -pthread -std=gnu++17 -march=native -g -MMD -MP -fmessage-length=0 ${CXXFLAGS.gcc.${BUILD}}

CXXFLAGS.clang.debug := -O0 -fstack-protector-all
CXXFLAGS.clang.release := -O3 -march=native -DNDEBUG
CXXFLAGS.clang := -pthread -std=gnu++14 -march=native -g -MMD -MP -fmessage-length=0 ${CXXFLAGS.clang.${BUILD}}

CXXFLAGS := ${CXXFLAGS.${COMPILER}}
CFLAGS := ${CFLAGS.${COMPILER}}

LDFLAGS.debug := -ggdb3
LDFLAGS.release :=
LDFLAGS := -fuse-ld=gold -pthread -g ${LDFLAGS.${BUILD}}
LDLIBS := -ldl

LIB_SRC_DIRS := .
LIB_BUILD_DIR = $(BASE_BUILD_DIR)
LIB_STATIC_OBJ := $(LIB_BUILD_DIR)/libcatch2.a

LIB_SRCS := $(shell find $(LIB_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
LIB_OBJS := $(LIB_SRCS:%=$(LIB_BUILD_DIR)/%.o)
LIB_DEPS := $(LIB_OBJS:.o=.d)
LIB_INC_DIRS := $(shell find $(LIB_SRC_DIRS) -type d) ../
LIB_INC_FLAGS := $(addprefix -I,$(LIB_INC_DIRS))
LIB_CPPFLAGS := $(GLOBAL_CPPFLAGS) $(LIB_INC_FLAGS)

$(LIB_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(LIB_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(LIB_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(LIB_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(LIB_STATIC_OBJ): $(LIB_OBJS)
	ar $(ARFLAGS) $@ $^

catch2: $(LIB_STATIC_OBJ)

.PHONY: clean
clean:
	rm -rf $(BASE_BUILD_DIR)