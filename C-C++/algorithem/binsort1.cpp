//*************************************************************************
//* File Name: binsort1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-02  21-48-07====
//*************************************************************************

#include <iostream>
using namespace std;
void binarysearch(int[],int,int,int);
int num=0;
int main() {
    int a[]{1,2,3,14,23,32,36,44,45};
    binarysearch(a,0,8,3);
    return 0;
}
void binarysearch(int a[],int start,int end,int target){
    int mid=(start+end)/2;
    num++;
    if(a[mid]==target)
        cout<<"OK"<<" cost:"<<num<<endl;
    else
        cout<<"Null"<<" cost:"<<num<<endl;
    if(a[mid]>target)
        binarysearch(a,start,mid-1,target);
    if(a[mid]<target)
        binarysearch(a,mid+1,end,target);
}
