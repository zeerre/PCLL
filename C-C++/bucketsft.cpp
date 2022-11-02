//*************************************************************************
//* File Name: bucketsft.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-02  08-29-34====
//*************************************************************************

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketint(int[],int);
void bucketfloat(float[],int);
int getmax(int[],int);
int getmin(int[],int);
void displayarri(int[],int);
void displayarrf(float[],int);
int main() {
    int a[]={34,3,1,98,65,43,56,22,16};
    float b[]={0.98,0.42,0.64,0.22,0.18};
    int len1=sizeof(a)/sizeof(a[0]);
    int len2=sizeof(b)/sizeof(b[0]);
    cout<<"Array a before sort:\n";
    displayarri(a,len1);
    cout<<"Array a after sort: \n";
    bucketint(a,len1);
    displayarri(a,len1);

    cout<<"Array b before sort:\n";
    displayarrf(b,len2);
    cout<<"Array a after sort: \n";
    bucketfloat(b,len2);
    displayarrf(b,len2);

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
    for(int i=1;i<len;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
void displayarri(int a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
void displayarrf(float a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
void bucketint(int a[],int len){
    int max=getmax(a,len);
    int min=getmin(a,len);
    int n=(max-min)/len;
    vector<int> bucket[len];
    for(int i=0;i<len;i++){
        bucket[a[i]/n/10].push_back(a[i]);
    }
    for(int i=0;i<len;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    for(int i=0,j=0;i<len;i++){
        while(!bucket[i].empty()){
            a[j++]=*(bucket[i].begin());
            bucket[i].erase(bucket[i].begin());
        }
    }
    /*
    int index=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<bucket[i].size();j++){
            a[index++]=bucket[i][j];
        }
    }
    */
}
void bucketfloat(float a[],int len){
    vector<float> bucket[len];
    for(int i=0;i<len;i++){
        bucket[int(len*a[i])].push_back(a[i]);
    }
    for(int i=0;i<len;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    /*
    int index=0;
    for(int i=0;i<len;i++){
        while(!bucket[i].empty()){
            a[index++]=*(bucket[i].begin());
            bucket[i].erase(bucket[i].begin());
        }
    }
    */

    int index=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<bucket[i].size();j++){
            a[index++]=bucket[i][j];
        }
    }
}
