//*************************************************************************
//* File Name: heapsorth.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-09  20-19-03====
//*************************************************************************

#include <iostream>
#include "heapsort.h"
void display(int a[],int len){
    for(int i=0;i<len;i++)
        std::cout<<a[i]<<" ";
    std::cout<<std::endl;
}
void heapify(int a[],int len,int exp){
    int largest=exp;
    int l=2*exp+1;
    int r=2*exp+2;
    if(l<len&&a[l]>a[largest])
        largest=l;
    if(r<len && a[r]>a[largest])
        largest=r;
    if(largest!=exp){
        std::swap(a[exp],a[largest]);
        heapify(a,len,largest);
    }
}
void heapsort(int a[],int len){
    for(int i=len/2-1;i>=0;i--)
        heapify(a,len,i);
    for(int i=len-1;i>0;i--){
        std::swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
