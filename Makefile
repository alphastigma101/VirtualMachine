# Compiler and flags
CXX := g++
CXXFLAGS := -g -std=c++23
LDFLAGS := -L $(HOME)/VirtualMachine/tests -lgtest -lgtest_main -pthread

# Include directories
INCLUDES := -I mem/ -I declarations/ -I chunk/ -I debug/ -I value/ -I common/ -I vm/

SRC_MEMORY := mem/mem.c
SRC_CHUNK := chunk/chunk.c
SRC_DEBUG := debug/debug.c
SRC_VALUE := value/value.c
SRC_VM := vm/vm.c
SRC_MAIN := mem/mem.c chunk/chunk.c debug/debug.c vm/vm.c value/value.c main.c

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