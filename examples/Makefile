include ${CURDIR}/../common.mk

BASE_BUILD_DIR := ${CURDIR}/../build/${BUILD}/examples

EXAMPLE_SRC_DIRS := .
EXAMPLE_BUILD_DIR = $(BASE_BUILD_DIR)
EXAMPLE_BIN := $(EXAMPLE_BUILD_DIR)/example-main

TYPEDEF_BIN := ${CURDIR}/../build/${BUILD}/typedef

EXAMPLE_CPPFLAGS := $(GLOBAL_CPPFLAGS) -I${CURDIR}/../include -I${CURDIR}/../

TD_FLAGS := --cpp_json_writer --cpp_json_parser --cpp_out

json/json_demo.td.cpp:
	$(TYPEDEF_BIN) -f json/json_demo.td $(TD_FLAGS) ${CURDIR}/json
$(BASE_BUILD_DIR)/json: json/json_demo.td.cpp json/main.cpp
	mkdir -p $(dir $@)
	$(CXX) -o $@ $(EXAMPLE_CPPFLAGS) $(CXXFLAGS) \
	json/json_demo.td.cpp \
	json/main.cpp
example-json: json/json_demo.td.cpp $(BASE_BUILD_DIR)/json

simple_values/simple_values.td.cpp:
	$(TYPEDEF_BIN) -f simple_values/simple_values.td $(TD_FLAGS) ${CURDIR}/simple_values
$(BASE_BUILD_DIR)/simple_values: simple_values/simple_values.td.cpp simple_values/main.cpp
	mkdir -p $(dir $@)
	$(CXX) -o $@ $(EXAMPLE_CPPFLAGS) $(CXXFLAGS) \
	simple_values/simple_values.td.cpp \
	simple_values/main.cpp
example-simple_values: simple_values/simple_values.td.cpp $(BASE_BUILD_DIR)/simple_values

template/template_example.td.cpp:
	$(TYPEDEF_BIN) -f template/template.td $(TD_FLAGS) ${CURDIR}/template
$(BASE_BUILD_DIR)/template: template/template_example.td.cpp template/main.cpp
	mkdir -p $(dir $@)
	$(CXX) -o $@ $(EXAMPLE_CPPFLAGS) $(CXXFLAGS) \
	template/template_example.td.cpp \
	template/main.cpp
example-template: template/template_example.td.cpp $(BASE_BUILD_DIR)/template

.DEFAULT_GOAL:= all
all: example-json example-simple_values example-template

.PHONY: clean
clean:
	rm -rf $(BASE_BUILD_DIR) \
	json/json_demo.td.cpp \
	json/json_demo.td.h \
	simple_values/simple_values.td.cpp \
	simple_values/simple_values.td.h \
	template/template_example.td.cpp \
	template/template_example.td.h