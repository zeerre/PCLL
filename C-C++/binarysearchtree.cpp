//*************************************************************************
//* File Name: binarysearchtree.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-23  15-05-03====
//*************************************************************************

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int data){
    struct node* p=new struct node();
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
int main() {

    return 0;
}
