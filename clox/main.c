#include "chunk.h"
#include "common.h"
#include "vm.h"
#include "debug.h"
#include "stdio.h"

int main(int argc, const char *argv[]) {
    initVM();
    Chunk chunk;
    initChunk(&chunk);
    int constant1 = addConstant(&chunk, 1.2);
    int constant2 = addConstant(&chunk, 3.4);
    int constant3 = addConstant(&chunk, 5.6);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, constant1, 1);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, constant2, 1);
    writeChunk(&chunk, OP_ADD, 1);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, constant3, 1);
    writeChunk(&chunk, OP_DIVIDE, 1);
    writeChunk(&chunk, OP_NEGATE, 1);
    writeChunk(&chunk, OP_RETURN, 1);
    /*
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);
    writeChunk(&chunk, OP_NEGATE, 123);
    writeChunk(&chunk, OP_RETURN, 123);
    disassembleChunk(&chunk, "test chunk");
    */
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;
}