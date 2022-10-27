//*************************************************************************
//* File Name: overloadc.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-26  15-09-49====
//*************************************************************************

#include <iostream>
using namespace std;
int ol(int a,int b){
    return a+b;
}
float ol(float a,float b){
    return a+b;
}
int main() {
    int a=3,b=5;
    float c=3.2,d=4.4;
    cout<<ol(a,b)<<" "<<ol(c,d)<<endl;
    return 0;
}
