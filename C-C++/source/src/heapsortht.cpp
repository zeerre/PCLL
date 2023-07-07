//*************************************************************************
//* File Name: heapsortht.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-09  20-26-37====
//*************************************************************************

#include <iostream>
#include "../source/heapsort.h"
using namespace std;
int main() {
    int a[]={90,0,32,12,21,31,12,0,56,65,76,76,87,78,98,89};
    int len=sizeof(a)/sizeof(a[0]);
    heapsort(a,len);
    display(a,len);
    return 0;
}
