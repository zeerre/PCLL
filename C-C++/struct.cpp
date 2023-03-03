//*************************************************************************
//* File Name: struct.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-11  08-46-03====
//*************************************************************************

#include <iostream>
#include<string>
#include<cstring>
using namespace std;
//typedef struct Students{
struct Students{
    string first_name;
    char last_name[10];
    int chinese_s;
    int math_s;
    int english_s;
    int sum_s;
};
int main() {
    struct Students a={"周","花剑",88,99,100};
    struct Students b;
    b.first_name="tom";strcpy(b.last_name,"Mike");b.chinese_s=99;b.math_s=98;
    b.english_s=100;
    b.sum_s=b.math_s+b.chinese_s+b.english_s;

    a.sum_s=a.math_s+a.chinese_s+a.english_s;
    cout<<a.first_name<<a.last_name<<":"<<a.sum_s<<endl;
    cout<<b.first_name<<b.last_name<<":"<<b.sum_s<<endl;

    return 0;
}
