//*************************************************************************
//* File Name: linklist.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-15  14-28-55====
//*************************************************************************

#include <iostream>
#include<stdlib.h>
using namespace std;
struct node{

    int data;
    struct node* next;
    //struct node* head;
};
void display(struct node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void insertnodef(struct node** p,int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=(*p);
    (*p)=newnode;
}
void insertnodeb(struct node* p,int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    p->next=newnode;
    newnode->data=data;
    newnode->next=NULL;
}
int main() {
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=10;n->next=NULL;
    insertnodeb(n,5);
    for(int i=1;i<5;i++)
    	insertnodef(&n,i);
    display(n);
    return 0;
}
