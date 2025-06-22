// rotate.c - Rotate Right function
#include "major.h"

unsigned int rotate_right(unsigned int x, unsigned int amount) {
    amount %= 32; // Ensure rotation is within 0-31
    return (x >> amount) | (x << (32 - amount));
}
