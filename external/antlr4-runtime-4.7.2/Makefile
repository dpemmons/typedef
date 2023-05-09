include ${CURDIR}/../../common.mk

BUILD := debug
COMPILER=gcc
BASE_BUILD_DIR := ${CURDIR}/../../build/${BUILD}/external/antlr4-runtime-4.7.2

LIB_SRC_DIRS := .
LIB_BUILD_DIR = $(BASE_BUILD_DIR)
LIB_STATIC_OBJ := $(LIB_BUILD_DIR)/libantlr4.a

LIB_SRCS := $(shell find $(LIB_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
LIB_OBJS := $(LIB_SRCS:%=$(LIB_BUILD_DIR)/%.o)
LIB_DEPS := $(LIB_OBJS:.o=.d)
LIB_INC_DIRS := $(shell find $(LIB_SRC_DIRS) -type d) .
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

antlr4: $(LIB_STATIC_OBJ)

.PHONY: clean
clean:
	rm -rf $(BASE_BUILD_DIR)