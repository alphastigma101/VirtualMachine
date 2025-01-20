#!bin/bash

g++ -std=c++23 -I mem/ -I declarations/ -I chunk/ -I value/ -c chunk/chunk.cc -o chunk.o 
g++ -std=c++23 -I mem/ -I declarations/ -c mem/mem.cc -o mem.o 