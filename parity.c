#include "major.h"
//Dustin Dowell Parity int
int bit_parity(unsigned int x) {
  int Pari=0;
  while (x) {
    Pari ^= (x & 1);
    x >>= 1;
  }
  return Pari;
}
