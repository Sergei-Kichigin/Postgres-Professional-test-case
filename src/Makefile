CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBS = -lcheck -lm

OS = $(shell uname)
ifeq ($(OS), Linux)
	LIBS += -lsubunit
endif

BUILD_DIR = ../build
TARGET = quadratic_equation
TEST_TARGET = test_quadratic_equation

SRC_CL = ../materials/linters/.clang-format

all: build check

build: $(TEST_TARGET)

$(TARGET).o: $(TARGET).c
	$(CC) $(CFLAGS) -c $<

$(TEST_TARGET): $(TEST_TARGET).o $(TARGET).o
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $^ $(LIBS)

$(TEST_TARGET).o: $(TEST_TARGET).c
	$(CC) $(CFLAGS) -c $<

check: $(TEST_TARGET)
	./$(BUILD_DIR)/$<

clang_all:
	cp $(SRC_CL) .clang-format
	clang-format -i *.c
	clang-format -i *.h
	rm -f .clang-format

clean:
	rm -f $(TARGET) $(BUILD_DIR)/$(TEST_TARGET) *.o

rebuild: clean all

.PHONY: all clean build rebuild check clang_all
