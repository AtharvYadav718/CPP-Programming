#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int Arr[5]; //Static memory allocation

    int *ptr = (int *)malloc(5 * sizeof(int));  //Dynamic in C

    int *ptr = new int[5];  //Dynamic in C++

    free *ptr = new int [5];    //C

    delete ptr2[];

    return 0;
}