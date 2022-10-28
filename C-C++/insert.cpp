//*************************************************************************
//* File Name: insert.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-28  09-37-55====
//*************************************************************************

#include <iostream>
using namespace std;
int insert(int[],int);
int arr[]{12,3,45,32,87,12,21,18,54};
int main() {
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<insert(arr,len)<<" "<<endl;
    for(auto k:arr){
        cout<<k<<" ";
    }
    cout<<endl;
    return 0;
}
int insert(int a[],int len){
    int num=0;
    for(int i=1;i<len;i++){
        int index=i-1;
        int tem=a[i];
        while(index>=0&& a[index]>tem){
            a[index+1]=a[index];
            index--;
            num++;
        }
        num++;
        a[index+1]=tem;
    }
    return num;
}
