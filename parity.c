#include "major.h"
//Dustin Dowell Parity int
int Bit_Parity(unsigned int X) {
  int Pari=0;
  while (X) {
    Pari ^= (X & 1);
    X >>= 1;
  }
  return Pari;
}
