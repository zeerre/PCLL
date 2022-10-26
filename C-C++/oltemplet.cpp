//*************************************************************************
//* File Name: oltemplet.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-26  15-25-25====
//*************************************************************************

#include <iostream>
using namespace std;
template <class T>
T mul(T a,T b){
    T re;
    re=a*b;
    return re;
}
int main() {
    int a=3,b=8,c,cc;
    double e=4.2,f=5.3,g,gg;
    c=mul<int>(a,b);
    cc=mul(a,b);
    g=mul<double>(e,f);
    gg=mul(e,f);
    cout<<c<<"\t"<<g<<endl;
    cout<<cc<<"\t"<<gg<<endl;
    return 0;
}
