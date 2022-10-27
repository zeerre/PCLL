//*************************************************************************
//* File Name: overloadtp.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-26  15-13-58====
//*************************************************************************

#include <iostream>
#include <string>
using namespace std;
template <class T>
T sum(T a,T b){
    T result;
    result=a+b;
    return result;
}
int main() {
    int a=1,b=3,c;
    double x=2.3,y=4.3,z;
    char o='3',p='2',q;
    string e="1234",f="5678",g;
    c=sum<int>(a,b);
    z=sum<double>(x,y);
    q=sum<char>(o,p);
    g=sum<string>(e,f);
    cout<<c<<"\t"<<z<<"\t"<<q<<endl;
    cout<<g<<endl;
    return 0;
}
