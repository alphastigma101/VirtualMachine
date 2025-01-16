# Compiler and flags
CXX := g++
CXXFLAGS := -g -std=c++23 
LDFLAGS := -L $(HOME)/Interpreter/tests -lgtest -lgtest_main -pthread

# Include directories
INCLUDES := -I common/ -I memory/ -I declarations/
