//*************************************************************************
//* File Name: bucketsortint.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-01  23-01-44====
//*************************************************************************

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printarr(int[],int);
void bucketsortint(int[],int);
int getmax(int[],int);
int getmin(int[],int);
int main() {
    int arr[]={99,84,2,41,23,12,78,65,48};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sort: \n";
    printarr(arr,len);
    bucketsortint(arr,len);
    cout<<"After sort: \n";
    printarr(arr,len);
    return 0;
}

int getmax(int a[],int len){
    int max=a[0];
    for(int i=1;i<len;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int getmin(int a[],int len){
    int min=a[0];
    for(int i=0;i<len;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
void printarr(int a[],int len){
    for(int i=0 ;i<len;i++){
        cout<< a[i]<<"\t";
    }
    cout<<endl;
}

void bucketsortint(int a[],int len){
    int max=getmax(a,len);
    int min=getmin(a,len);
    int n=(max-min)/len+1;
    vector<int> bucket[len];
    for(int i=0;i<len;i++){
        bucket[int(a[i]/n/10)].push_back(a[i]);
    }
    for(int i=0;i<len;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    int index=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<bucket[i].size();j++){
            a[index++]=bucket[i][j];
        }
    }
}
