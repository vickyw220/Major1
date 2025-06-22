#include "major.h" 
int count_leading_zeros(unsigned int x) {
    int count = 0;
    for (int i = 31; i >= 0; --i) {
        if ((x >> i) & 1) {
            break;
        }
        count++;
    }
    return count;
}
