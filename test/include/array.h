#include <iostream>
#include <random>

void FillArray  (int arr[], int SIZE); // ���������� ������� ���������� �������
void PrintArray (int arr[], int SIZE); // ����� ������� � �������




void FillArray(int arr[], int SIZE){
    for(int i = 0 ; i < SIZE;i++){
        arr[i] = rand() % 10;
    }
}

void PrintArray(int arr[],int SIZE){
    for(int i=0;i<SIZE;i++){
        std::cout << arr[i] << std::endl;
    }
}
