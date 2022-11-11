//*************************************************************************
//* File Name: struct.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-11  08-46-03====
//*************************************************************************

#include <iostream>
#include<string>
using namespace std;
struct Students{
    string name;
    int chinese_s;
    int math_s;
    int english_s;
    int sum_s;
}Stu;
int main() {
    Students stu;
    stu.name={"黎明"};
    stu.chinese_s=99;
    stu.math_s=100;
    stu.english_s=88;
    stu.sum_s=stu.math_s+stu.chinese_s+stu.english_s;
    cout<<stu.sum_s<<endl;
    Students stu1={"周华健",100,100,99};
    stu1.sum_s=stu1.math_s+stu1.chinese_s+stu1.english_s;
    cout<<stu1.sum_s<<endl;
    return 0;
}
