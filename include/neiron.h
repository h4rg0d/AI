#include <math.h>
#include "mathN.h"

void forWards    (int Ni[NISIZE],int No[NOSIZE], int W[XSIZE,YSIZE],int NISIZE,int NOSIZE, int XSIZE,int YSIZE); //
void fixOutError (); // Write the error in the output layer
void findError   (); //
void backWards   (); //
void fillW       (); // Filling the array of weights with random numbers in the range -0.5 .. 0.5
