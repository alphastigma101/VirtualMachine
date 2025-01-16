# Compiler and flags
CXX := g++
CXXFLAGS := -g -std=c++23
LDFLAGS := -L $(HOME)/VirtualMachine/tests -lgtest -lgtest_main -pthread

# Include directories
INCLUDES := -I mem/ -I declarations/ -I chunk/

SRC_MEMORY := mem/mem.cc
SRC_CHUNK := chunk/chunk.cc
SRC_MAIN := mem/mem.cc chunk/chunk.cc main.cc

BINARIES := exec_vm
.PHONY: all clean

all: $(BINARIES)

%.o: %.cc
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

exec_vm: $(SRC_MAIN)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

clean:
	rm -f *.o
	rm -f $(BINARIES)
