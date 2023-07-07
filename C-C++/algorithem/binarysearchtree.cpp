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
void preordertraval(struct node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preordertraval(p->left);
        preordertraval(p->right);
    }
}
void inordertraval(struct node* p){
    if(p!=NULL){
        inordertraval(p->left);
        cout<<p->data<<" ";
        inordertraval(p->right);
    }
}
void postordertraval(struct node* p){
    if(p!=NULL){
        postordertraval(p->left);
        postordertraval(p->right);
        cout<<p->data<<" ";
    }
}
int main() {
    struct node* r=newnode(0);
    r->left=newnode(1);
    r->right=newnode(2);
    r->left->left=newnode(3);
    r->left->right=newnode(4);
    r->right->left=newnode(5);
    r->right->right=newnode(6);
    r->left->left->left=newnode(7);
    r->right->right->right=newnode(8);

    cout<<"Preorder:";
    preordertraval(r);
    cout<<endl;

    cout<<"Inorder:";
    inordertraval(r);
    cout<<endl;

    cout<<"Postorder:";
    postordertraval(r);
    cout<<endl;

    return 0;
}
