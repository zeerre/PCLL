//*************************************************************************
//* File Name: vectort.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-01  08-26-44====
//*************************************************************************

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int ele=12;
    vector<int> v1(ele,8);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(3);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"\t";
    }
    cout<<endl;
    for(auto v:v2){
        cout<<v<<"\t";
    }
    cout<<endl;
    return 0;
}
