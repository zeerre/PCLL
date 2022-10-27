//*************************************************************************
//* File Name: member.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-26  12-22-32====
//*************************************************************************

#include <iostream>
using namespace std;
class Circle{
    double radius;
    public:
    Circle(double r):radius(r){}
    double cirsum(){
        return 2*3.142*radius;
    }
    double area(){
        return 3.142*radius*radius;
    }
};
class Cylinder{
    Circle t;
    double height;
    public:
    Cylinder(double r,double h):t(r),height(h){}
    void volume(){
        cout<<t.area()*height<<endl;
    }
    void surarea(){
        cout<<2*t.area()+t.cirsum()*height<<endl;
    }
};
int main() {
    Cylinder c(2.0,4.0);
    c.volume();
    c.surarea();
    return 0;
}
