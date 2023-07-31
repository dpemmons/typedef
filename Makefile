include ${CURDIR}/common.mk

.DEFAULT_GOAL := all

BASE_BUILD_DIR := ${CURDIR}/build/${BUILD}

###############################################################################
# LIB Rules
LIBTYPEDEF_SRC_DIRS := ./libtypedef
LIBTYPEDEF_BUILD_DIR := $(BASE_BUILD_DIR)/libtypedef
LIBTYPEDEF_STATIC_OBJ := $(BASE_BUILD_DIR)/libtypedef.a

LIBTYPEDEF_SRCS := $(shell find $(LIBTYPEDEF_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
LIBTYPEDEF_OBJS := $(LIBTYPEDEF_SRCS:%=$(LIBTYPEDEF_BUILD_DIR)/%.o)
LIBTYPEDEF_DEPS := $(LIBTYPEDEF_OBJS:.o=.d)
LIBTYPEDEF_INC_DIRS := $(shell find $(LIBTYPEDEF_SRC_DIRS) -type d) . $(ANTLR4_LIB_HEADERS) $(FMT_LIB_HEADERS)
LIBTYPEDEF_INC_FLAGS := $(addprefix -I,$(LIBTYPEDEF_INC_DIRS))
LIBTYPEDEF_CPPFLAGS := $(GLOBAL_CPPFLAGS) $(LIBTYPEDEF_INC_FLAGS) -Werror -Wno-error=attributes # -Wall -Wextra 

$(LIBTYPEDEF_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(LIBTYPEDEF_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(LIBTYPEDEF_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(LIBTYPEDEF_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(LIBTYPEDEF_STATIC_OBJ): $(LIBTYPEDEF_OBJS)
	ar $(ARFLAGS) $@ $^
#
###############################################################################

###############################################################################
# typedef binary rules
TYPEDEF_SRC_DIRS := ./typedef
TYPEDEF_BUILD_DIR := $(BASE_BUILD_DIR)/typedef-build
TYPEDEF_EXEC := $(BASE_BUILD_DIR)/typedef

TYPEDEF_SRCS := $(shell find $(TYPEDEF_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
TYPEDEF_OBJS := $(TYPEDEF_SRCS:%=$(TYPEDEF_BUILD_DIR)/%.o)
TYPEDEF_DEPS := $(TYPEDEF_OBJS:.o=.d)
TYPEDEF_INC_DIRS := $(shell find $(TYPEDEF_SRC_DIRS) -type d) . $(CLI_LIB_HEADERS) $(FMT_LIB_HEADERS)
TYPEDEF_INC_FLAGS := $(addprefix -I,$(TYPEDEF_INC_DIRS))
TYPEDEF_CPPFLAGS := $(GLOBAL_CPPFLAGS) $(TYPEDEF_INC_FLAGS) $(LIBTYPEDEF_INC_FLAGS) -Werror # -Wall -Wextra 

$(TYPEDEF_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(TYPEDEF_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(TYPEDEF_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(TYPEDEF_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(TYPEDEF_EXEC): $(TYPEDEF_OBJS) $(LIBTYPEDEF_STATIC_OBJ) antlr4-runtime
	$(CXX) $(TYPEDEF_OBJS) $(LIBTYPEDEF_STATIC_OBJ) $(ANTLR4_LIB) -o $@ $(LDFLAGS)

#
###############################################################################

###############################################################################
# TEST Rules
TESTS_SRC_DIRS := ./tests
TESTS_BUILD_DIR := $(BASE_BUILD_DIR)/tests-build
TESTS_EXEC := $(BASE_BUILD_DIR)/tests

TESTS_SRCS := $(shell find $(TESTS_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
TESTS_OBJS := $(TESTS_SRCS:%=$(TESTS_BUILD_DIR)/%.o)
TESTS_DEPS := $(TESTS_OBJS:.o=.d)
TESTS_INC_DIRS := $(shell find $(TESTS_SRC_DIRS) -type d) . $(ANTLR4_LIB_HEADERS) $(CATCH2_LIB_HEADERS) $(FMT_LIB_HEADERS)
TESTS_INC_FLAGS := $(addprefix -I,$(TESTS_INC_DIRS))
TESTS_CPPFLAGS := $(GLOBAL_CPPFLAGS) $(TESTS_INC_FLAGS) $(LIB_INC_FLAGS)

$(TESTS_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(TESTS_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(TESTS_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(TESTS_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(TESTS_EXEC): $(TESTS_OBJS) $(LIBTYPEDEF_STATIC_OBJ) catch2 antlr4-runtime
	$(CXX) $(TESTS_OBJS) $(LIBTYPEDEF_STATIC_OBJ) $(CATCH2_LIB) $(ANTLR4_LIB) -o $@ $(LDFLAGS)
#
###############################################################################

###############################################################################
# ANTLR4 Grammar
#
# Note that because the resulting code is checked in, this target is *NOT* run
# automatically with the other rules. You must run it  manually if you change
# the grammar.
TYPEDEF_PARSER_CPP := ./libtypedef/parser/grammar/TypedefParser.cpp
TYPEDEF_PARSER_G4 := ./libtypedef/parser/grammar/TypedefParser.g4

TYPEDEF_LEXER_CPP := ./libtypedef/parser/grammar/TypedefLexer.cpp
TYPEDEF_LEXER_G4 := ./libtypedef/parser/grammar/TypedefLexer.g4

TMPL_STR_PARSER_CPP := ./libtypedef/parser/grammar/TmplStrParser.cpp
TMPL_STR_PARSER_G4 := ./libtypedef/parser/grammar/TmplStrParser.g4

TMPL_STR_LEXER_CPP := ./libtypedef/parser/grammar/TmplStrLexer.cpp
TMPL_STR_LEXER_G4 := ./libtypedef/parser/grammar/TmplStrLexer.g4

$(TYPEDEF_PARSER_CPP): $(TYPEDEF_LEXER_CPP) $(TYPEDEF_PARSER_G4)
	/usr/bin/antlr4 -Dlanguage=Cpp -visitor $(TYPEDEF_PARSER_G4)
$(TYPEDEF_LEXER_CPP): $(TYPEDEF_LEXER_G4)
	/usr/bin/antlr4 -Dlanguage=Cpp $(TYPEDEF_LEXER_G4)

$(TMPL_STR_PARSER_CPP): $(TMPL_STR_LEXER_CPP) $(TMPL_STR_PARSER_G4)
	/usr/bin/antlr4 -Dlanguage=Cpp -visitor $(TMPL_STR_PARSER_G4)
$(TMPL_STR_LEXER_CPP): $(TMPL_STR_LEXER_G4)
	/usr/bin/antlr4 -Dlanguage=Cpp $(TMPL_STR_LEXER_G4)

grammar: $(TYPEDEF_LEXER_CPP) $(TYPEDEF_PARSER_CPP) $(TMPL_STR_LEXER_CPP) $(TMPL_STR_PARSER_CPP)
#
###############################################################################

CATCH2_LIB := $(BASE_BUILD_DIR)/external/catch2-3.3.1/libcatch2.a
$(CATCH2_LIB):
	$(MAKE) -C external/catch2-3.3.1 catch2
catch2: $(CATCH2_LIB)

ANTLR4_LIB := $(BASE_BUILD_DIR)/external/antlr4-runtime-4.7.2/libantlr4.a
$(ANTLR4_LIB):
	$(MAKE) -C external/antlr4-runtime-4.7.2 antlr4
antlr4-runtime: $(ANTLR4_LIB)

.PHONY: example-main-run
example-main-run: typedef
	$(MAKE) -C examples example-main-run

.PHONY: clean
clean:
	rm -rf $(BASE_BUILD_DIR)/libtypedef $(BASE_BUILD_DIR)/typedef $(BASE_BUILD_DIR)/test

.PHONY: typedef-clean
typedef-clean:
	rm -rf $(BASE_BUILD_DIR)/typedef

.PHONY: libtypedef-clean
libtypedef-clean:
	rm -rf $(BASE_BUILD_DIR)/libtypedef

.PHONY: test-clean
test-clean:
	rm -rf $(BASE_BUILD_DIR)/test

.PHONY: all-clean
all-clean:
	rm -rf build

.PHONY: tests
tests: $(TESTS_EXEC)
	$(TESTS_EXEC)

# or run an individual test suite like:
# test: $(TESTS_EXEC)
# 	$(TESTS_EXEC) "[bool]"

libtypedef: $(LIBTYPEDEF_STATIC_OBJ)
typedef: libtypedef $(TYPEDEF_EXEC)
test-bin: $(TEST_EXEC)

all: test-bin typedef

# Include the .d makefiles. The - at the front suppresses the errors of missing
# Makefiles. Initially, all the .d files will be missing, and we don't want those
# errors to show up.
-include $(LIB_DEPS)