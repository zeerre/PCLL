//*************************************************************************
//* File Name: bubble.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-27  16-08-22====
//*************************************************************************

#include <iostream>
using namespace std;
int bubble(int[],int);
int a[]={9, 3, 4, 2, 1, 8, 12, 92, 32, 52, 76};
int main() {
    int len;
    len=sizeof(a)/sizeof(a[0]);
    cout<<bubble(a,len)<<endl;
    for(auto val:a){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

int bubble(int *b,int l){
    int num=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i-1;j++){
            if(b[j]>b[j+1]){
                int temp;
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
                num++;
            }
        }
    }
    return num;
}
