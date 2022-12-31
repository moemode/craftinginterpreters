#!/bin/bash
gcc -c -o main.o main.c
gcc -c -o memory.o memory.c
gcc -c -o debug.o debug.c
gcc -c -o chunk.o chunk.c
gcc -c -o value.o value.c
gcc -c -o vm.o vm.c
gcc -c -o scanner.o scanner.c
gcc -c -o compiler.o compiler.c
gcc -o clox main.o memory.o chunk.o debug.o value.o vm.o scanner.o compiler.o -L.