//*************************************************************************
//* File Name: binarytree.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-22  21-39-10====
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
    return (p);
}
void preordertree(struct node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preordertree(p->left);
        preordertree(p->right);
    }
}
void inordertree(struct node* p){
    if(p!=NULL){
        inordertree(p->left);
        cout<<p->data<<" ";
        inordertree(p->right);
    }
}
void postordertree(struct node* p){
    if(p!=NULL){
        postordertree(p->left);
        postordertree(p->right);
        cout<<p->data<<" ";
    }
}
int main() {
    struct node *root=newnode(0);
    root->left=newnode(1);
    root->right=newnode(2);
    root->left->left=newnode(3);
    root->left->right=newnode(4);
    root->right->left=newnode(5);

    cout<<"preorder:\n";
    preordertree(root);
    cout<<endl;

    cout<<"inorder:\n";
    inordertree(root);
    cout<<endl;

    cout<<"postorder:\n";
    postordertree(root);
    cout<<endl;
    return 0;
}
