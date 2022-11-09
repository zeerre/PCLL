//*************************************************************************
//* File Name: vector.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-09  16-16-10====
//*************************************************************************

#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<string>ve(4);
    for(int i=0;i<4;i++)
        ve[i].push_back(to_string(i));
    for(auto v:ve)
        cout<<v<<" ";
    cout<<endl;
    return 0;
}
