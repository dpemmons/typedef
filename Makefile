BASE_BUILD_DIR := ./build

#------------------------------------------------------------------------------
# LIB Rules
#------------------------------------------------------------------------------
LIB_SRC_DIRS := ./src/lib
LIB_BUILD_DIR := $(BASE_BUILD_DIR)/lib
LIB_STATIC_OBJ := $(LIB_BUILD_DIR)/libtypedef.a

LIB_SRCS := $(shell find $(LIB_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
LIB_OBJS := $(LIB_SRCS:%=$(LIB_BUILD_DIR)/%.o)
LIB_DEPS := $(LIB_OBJS:.o=.d)
LIB_INC_DIRS := $(shell find $(LIB_SRC_DIRS) -type d)
LIB_INC_FLAGS := $(addprefix -I,$(LIB_INC_DIRS))
LIB_CPPFLAGS := $(LIB_INC_FLAGS) -std=c++17 -w -MMD -MP

$(LIB_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(LIB_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(LIB_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(LIB_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(LIB_STATIC_OBJ): $(LIB_OBJS)
	ar $(ARFLAGS) $@ $^

#------------------------------------------------------------------------------
# CMD Rules
#------------------------------------------------------------------------------
CMD_SRC_DIRS := ./src/cmd
CMD_BUILD_DIR := $(BASE_BUILD_DIR)/cmd
CMD_EXEC := $(CMD_BUILD_DIR)/typedef

CMD_SRCS := $(shell find $(CMD_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
CMD_OBJS := $(CMD_SRCS:%=$(CMD_BUILD_DIR)/%.o)
CMD_DEPS := $(CMD_OBJS:.o=.d)
CMD_INC_DIRS := $(shell find $(CMD_SRC_DIRS) -type d)
CMD_INC_FLAGS := $(addprefix -I,$(CMD_INC_DIRS))
CMD_CPPFLAGS := $(CMD_INC_FLAGS) $(LIB_INC_FLAGS) -std=c++17 -w -MMD -MP

$(CMD_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CMD_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(CMD_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CMD_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(CMD_EXEC): $(CMD_OBJS) $(LIB_STATIC_OBJ)
	$(CXX) $(CMD_OBJS) $(LIB_STATIC_OBJ) -o $@ $(LDFLAGS)

#------------------------------------------------------------------------------
# TEST Rules
#------------------------------------------------------------------------------
TEST_SRC_DIRS := ./src/test
TEST_BUILD_DIR := $(BASE_BUILD_DIR)/test
TEST_EXEC := $(TEST_BUILD_DIR)/testmain

TEST_SRCS := $(shell find $(TEST_SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s')
TEST_OBJS := $(TEST_SRCS:%=$(TEST_BUILD_DIR)/%.o)
TEST_DEPS := $(TEST_OBJS:.o=.d)
TEST_INC_DIRS := $(shell find $(TEST_SRC_DIRS) -type d)
TEST_INC_FLAGS := $(addprefix -I,$(TEST_INC_DIRS))
TEST_CPPFLAGS := $(TEST_INC_FLAGS) $(LIB_INC_FLAGS) -std=c++17 -w -MMD -MP

$(TEST_BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(TEST_CPPFLAGS) $(CFLAGS) -c $< -o $@

$(TEST_BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(TEST_CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(TEST_EXEC): $(TEST_OBJS) $(LIB_STATIC_OBJ)
	$(CXX) $(TEST_OBJS) $(LIB_STATIC_OBJ) -o $@ $(LDFLAGS)

# ANTLR4 Grammar

GRAMMAR:=./src/lib/grammar/TypedefParser.g4 ./src/lib/grammar/TypedefLexer.g4

antlr4:
	/usr/bin/antlr4 -Dlanguage=Cpp $(GRAMMAR)

.PHONY: clean
clean:
	rm -r $(BASE_BUILD_DIR)

.PHONY: run
test: $(TEST_EXEC)
	$(TEST_EXEC)

lib: $(LIB_STATIC_OBJ)
cmd: $(CMD_EXEC)
test-bin: $(TEST_EXEC)
all: lib cmd test-bin

# Include the .d makefiles. The - at the front suppresses the errors of missing
# Makefiles. Initially, all the .d files will be missing, and we don't want those
# errors to show up.
-include $(LIB_DEPS)