//*************************************************************************
//* File Name: linklisttype.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-16  12-12-46====
//*************************************************************************

//Types of Linked List - Singly linked, doubly linked and circular
//In this tutorial, you will learn different types of linked list. Also, you will find implementation of linked list in C.
//
//Before you learn about the type of the linked list, make sure you know about the LinkedList Data Structure.
//
//There are three common types of Linked List.
//
//Singly Linked List
//Doubly Linked List
//Circular Linked List
//Singly Linked List
//It is the most common. Each node has data and a pointer to the next node.
//
//singly linked list
//Singly linked list
//Node is represented as:
//
//struct node {
//    int data;
//    struct node *next;
//}
//A three-member singly linked list can be created as:
//
///* Initialize nodes */
//struct node *head;
//struct node *one = NULL;
//struct node *two = NULL;
//struct node *three = NULL;
//
///* Allocate memory */
//one = malloc(sizeof(struct node));
//two = malloc(sizeof(struct node));
//three = malloc(sizeof(struct node));
//
///* Assign data values */
//one->data = 1;
//two->data = 2;
//three->data = 3;
//
///* Connect nodes */
//one->next = two;
//two->next = three;
//three->next = NULL;
//
///* Save address of first node in head */
//head = one;
//Doubly Linked List
//We add a pointer to the previous node in a doubly-linked list. Thus, we can go in either direction: forward or backward.
//
//doubly linked list
//Doubly linked list
//A node is represented as
//
//struct node {
//    int data;
//    struct node *next;
//    struct node *prev;
//}
//
//A three-member doubly linked list can be created as
//
///* Initialize nodes */
//struct node *head;
//struct node *one = NULL;
//struct node *two = NULL;
//struct node *three = NULL;
//
///* Allocate memory */
//one = malloc(sizeof(struct node));
//two = malloc(sizeof(struct node));
//three = malloc(sizeof(struct node));
//
///* Assign data values */
//one->data = 1;
//two->data = 2;
//three->data = 3;
//
///* Connect nodes */
//one->next = two;
//one->prev = NULL;
//
//two->next = three;
//two->prev = one;
//
//three->next = NULL;
//three->prev = two;
//
///* Save address of first node in head */
//head = one;
//If you want to learn more about it, please visit doubly linked list and operations on it.
//
//Circular Linked List
//A circular linked list is a variation of a linked list in which the last element is linked to the first element. This forms a circular loop.
//
//circular linked list
//Circular linked list
//A circular linked list can be either singly linked or doubly linked.
//
//for singly linked list, next pointer of last item points to the first item
//In the doubly linked list, prev pointer of the first item points to the last item as well.
//A three-member circular singly linked list can be created as:
//
///* Initialize nodes */
//struct node *head;
//struct node *one = NULL;
//struct node *two = NULL;
//struct node *three = NULL;
//
///* Allocate memory */
//one = malloc(sizeof(struct node));
//two = malloc(sizeof(struct node));
//three = malloc(sizeof(struct node));
//
///* Assign data values */
//one->data = 1;
//two->data = 2;
//three->data = 3;
//
///* Connect nodes */
//one->next = two;
//two->next = three;
//three->next = one;
//
///* Save address of first node in head */
//head = one;
//If you want to learn more about it, please visit circular linked list and operations on it.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
    struct node * prev;
//    struct node * lchild;
//    struct node * rchild;
};
void display(struct node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void displaybackward(struct node* p){
    struct node* tem;
    tem=p;
    while(tem->next!=NULL){
        tem=tem->next;
    }
    while(tem!=NULL){
        cout<<tem->data<<" ";
        tem=tem->prev;
    }
    cout<<endl;
}
void singlelinklist(struct node** p,int data){
    struct node* start=new struct node();
    start->data=data;
    start->next=(*p);
    //start->prev=NULL;
    *p=start;
}
void doublelinklist(struct node** p,int data){
    struct node* newnode=new struct node();    
    newnode->data=data;
    newnode->next=(*p);
    (*p)->prev=newnode;
    newnode->prev=NULL;    
    *p=newnode;
}
void deldoublelinklist(struct node** p,int key){
    struct node* temp=new struct node();
    struct node* pre;
    temp=(*p);
    if(temp!=NULL&&temp->data==key){
        temp=temp->next;
        temp->prev=NULL;
    }
    while(temp!=NULL&&temp->data!=key){
        pre=temp;
        temp=temp->next;
    }
    pre->next=temp->next;
    temp->next->prev=pre;
}
int main(){
    struct node* node=new struct node();
    struct node* noded=new struct node();
    node->data=100;node->next=NULL;noded->prev=NULL;
    noded->data=99;noded->next=NULL;noded->prev=NULL;
    singlelinklist(&node,3);
    singlelinklist(&node,30);
    display(node);    
    doublelinklist(&noded,39);
    for(int i=1;i<5;i++)
        doublelinklist(&noded,i*2);
    display(noded);
    deldoublelinklist(&noded,39);
    display(noded);
    displaybackward(noded);
    return 0;
}   
