// endian.c -vicky crated the endian swap function
#include "major.h"

unsigned int endian_swap(unsigned int x) {
    return ((x & 0x000000FF) << 24) |  // change the byte to 0 - 3
           ((x & 0x0000FF00) << 8)  |  // change the byte to 1 - 2
           ((x & 0x00FF0000) >> 8)  |  // change the byte to 2 -1
           ((x & 0xFF000000) >> 24);   // change the byte to 3 - 0
}