//*************************************************************************
//* File Name: test.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-08  13-40-43====
//*************************************************************************

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int a;
    float b;
    cin>>a;
    b=a;
    while(a>0){
        a/=2;
        b/=2.0;
        cout<<a<<" ";
        
        printf(" %f ",b);
    }
    cout<<endl;
    return 0;
}
