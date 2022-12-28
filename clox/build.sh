#!/bin/bash
gcc -c -o main.o main.c
gcc -c -o memory.o memory.c
gcc -c -o debug.o debug.c
gcc -c -o chunk.o chunk.c
gcc -o clox main.o memory.o chunk.o debug.o -L.