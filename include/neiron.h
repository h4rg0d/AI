#include <math.h>
#include "mathN.h"

void forWards    (int Ni[NISIZE],int No[NOSIZE], int W[XSIZE,YSIZE],int NISIZE,int NOSIZE, int XSIZE,int YSIZE); //
void fixOutError (); // Записываем ошибку в выходном слое
void findError   (); //
void backWards   (); //
void fillW       (); // Заполнение массива весов случайными чмслами в диапозоне -0,5 .. 0,5

