#include <math.h>
#include "mathN.h"

void forWards    (int Ni[NISIZE],int No[NOSIZE], int W[XSIZE,YSIZE],int NISIZE,int NOSIZE, int XSIZE,int YSIZE); //
void fixOutError (); // ���������� ������ � �������� ����
void findError   (); //
void backWards   (); //
void fillW       (); // ���������� ������� ����� ���������� ������� � ��������� -0,5 .. 0,5

