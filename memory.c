#include <stdint.h>

#define MEMORY_MAX (1 << 16)
uint16_t memory[MEMORY_MAX]; /* 2^16 or 65536 locations memory*/

/*
This is basically the memory of the VM in a simple array
*/