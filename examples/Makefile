include ${CURDIR}/../common.mk

BASE_BUILD_DIR := ${CURDIR}/../build/${BUILD}/examples

EXAMPLE_SRC_DIRS := .
EXAMPLE_BUILD_DIR = $(BASE_BUILD_DIR)
EXAMPLE_BIN := $(EXAMPLE_BUILD_DIR)/example-main

EXAMPLE_SRCS := $(shell find $(EXAMPLE_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
EXAMPLE_OBJS := $(EXAMPLE_SRCS:%=$(EXAMPLE_BUILD_DIR)/%.o)
EXAMPLE_DEPS := $(EXAMPLE_OBJS:.o=.d)
EXAMPLE_INC_DIRS := $(shell find $(EXAMPLE_SRC_DIRS) -type d) ../
EXAMPLE_INC_FLAGS := $(addprefix -I,$(EXAMPLE_INC_DIRS))
EXAMPLE_CPPFLAGS := $(GLOBAL_CPPFLAGS) $(EXAMPLE_INC_FLAGS)

$(EXAMPLE_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(EXAMPLE_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(EXAMPLE_BIN): $(EXAMPLE_OBJS)
	$(CXX) $(EXAMPLE_OBJS) -o $@ $(LDFLAGS)

TYPEDEF_BIN := ${CURDIR}/../build/${BUILD}/typedef
example-cpp-gen: FORCE
	$(TYPEDEF_BIN) -f simple_values.td --cpp_out ${CURDIR}/examples

FORCE: ;

example-main: example-cpp-gen $(EXAMPLE_BIN)

.PHONY: example-main-run
example-main-run: example-main
	$(EXAMPLE_BIN)

.PHONY: clean
clean:
	rm -rf $(BASE_BUILD_DIR)