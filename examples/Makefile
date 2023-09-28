include ${CURDIR}/../common.mk

BASE_BUILD_DIR := ${CURDIR}/../build/${BUILD}/examples

EXAMPLE_SRC_DIRS := .
EXAMPLE_BUILD_DIR = $(BASE_BUILD_DIR)
EXAMPLE_BIN := $(EXAMPLE_BUILD_DIR)/example-main

TYPEDEF_BIN := ${CURDIR}/../build/${BUILD}/typedef

EXAMPLE_CPPFLAGS := $(GLOBAL_CPPFLAGS) -I${CURDIR}/../include -I${CURDIR}/../

template/template_example.td.cpp: template/template.td
	$(TYPEDEF_BIN) -f $< --cpp_out=${CURDIR}/template
$(BASE_BUILD_DIR)/template: template/template_example.td.cpp template/main.cpp
	mkdir -p $(dir $@)
	$(CXX) -o $@ $(EXAMPLE_CPPFLAGS) $(CXXFLAGS) \
	template/template_example.td.cpp \
	template/main.cpp
example-template: template/template_example.td.cpp $(BASE_BUILD_DIR)/template


simple_values/simple_values.td.cpp: simple_values/simple_values.td
	$(TYPEDEF_BIN) -f $< --cpp_out=${CURDIR}/simple_values
$(BASE_BUILD_DIR)/simple_values: simple_values/simple_values.td.cpp simple_values/main.cpp
	mkdir -p $(dir $@)
	$(CXX) -o $@ $(EXAMPLE_CPPFLAGS) $(CXXFLAGS) \
	simple_values/simple_values.td.cpp \
	simple_values/main.cpp
example-simple_values: simple_values/simple_values.td.cpp $(BASE_BUILD_DIR)/simple_values

.DEFAULT_GOAL:= all
all: example-template example-simple_values

.PHONY: clean
clean:
	rm -rf $(BASE_BUILD_DIR) \
	template/template_example.td.cpp \
	template/template_example.td.h \
	simple_values/simple_values.td.cpp \
	simple_values/simple_values.td.h