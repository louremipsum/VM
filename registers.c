#include <stdint.h>

enum
{
    R_R0 = 0, /*R* to R7 are general purpose registers*/
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC,    /*For Program Counter which stores the address of next instruction in memory to execute*/
    R_COND,  /* Info about the Previous calc*/
    R_COUNT, /*TODO: will come back later to explan this*/
};

uint16_t reg[R_COUNT];

/*
Registers are slot for storing the data and CPU can only work on data
which is in the register.

Memory -> register <--CPU--> register ->

*/