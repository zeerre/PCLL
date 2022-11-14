//*************************************************************************
//* File Name: struct.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-11  08-46-03====
//*************************************************************************

#include <iostream>
#include<string>
using namespace std;
typedef struct Students{
    string first_name;
    char last_name[10];
    int chinese_s;
    int math_s;
    int english_s;
    int sum_s;
}Stu;
int main() {
    Stu a={"周","花剑",88,99,100};

    a.sum_s=a.math_s+a.chinese_s+a.english_s;
    cout<<a.first_name<<a.last_name<<":"<<a.sum_s<<endl;
    return 0;
}
