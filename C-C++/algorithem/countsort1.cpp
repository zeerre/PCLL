//*************************************************************************
//* File Name: countsort1.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-07  11-48-52====
//*************************************************************************

#include <bits/stdc++.h>
using namespace std;
void countsort(int [],int);
int getmax(int [],int);
void display(int [],int);
int main() {
    int a[]={9,8,3,45,21,2,2,3,3,9,9,21};
    int len=sizeof(a)/sizeof(a[0]);
    countsort(a,len);
    display(a,len);
    return 0;
}
void display(int a[],int len){
    for(int i=0;i<len;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int getmax(int a[],int len){
    int max=a[0];
    for(int i=0;i<len;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
void countsort(int a[],int len){
    int max=getmax(a,len);
    int output[len];
    int count[max+1];
    for(int i=0;i<=max;i++)
        count[i]=0;
    for(int i=0;i<len;i++)
        count[a[i]]++;
    for(int i=1;i<=max;i++)
        count[i]+=count[i-1];
    for(int i=len-1;i>=0;i--){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<len;i++)
        a[i]=output[i];
}

