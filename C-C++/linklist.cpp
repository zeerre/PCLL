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
void inserthead(struct node** p,int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    //struct node* newnode=new node();
    newnode->data=data;
    newnode->next=(*p);
    (*p)=newnode;
    return;
}
void insertail(struct node** p,int data){
    //struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* newnode=new node();
    struct node* last=*p;
    newnode->data=data;
    newnode->next=NULL;
    if (*p == NULL) {
  	*p = newnode;
  	return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newnode;
    return;
}
void insertbehind(struct node* p,int data){
    struct node* behind=new node();
    if(p==NULL)
        cout<<"ERROR\n";
    behind->next=p->next;
    behind->data=data;
    p->next=behind;
}
void insertfront(struct node** p,int data){
	struct node* front=new node();
	front->data=data;
	front->next=*p;
	*p=front;
	return;
}
void insertmid(struct node* p,int data,int position){
	struct node* newnode=new node();
	struct node* temp;
	newnode->data=data;
	temp=p;
	for(int i=2; i < position; i++) {
		if(temp->next != NULL) {
    		temp = temp->next;
  		}
	}//if position>len(p) insert the data on tail.
	newnode->next = temp->next;
	temp->next = newnode;
}			
int main() {
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=10;n->next=NULL;
    insertfront(&n,99);
    for(int i=0;i<5;i++)
    	insertail(&n,5*i);
    for(int i=1;i<5;i++)
    	inserthead(&n,i);
    insertbehind(n,100);
    insertail(&n,88);
    insertmid(n,77,14);
    display(n);
    return 0;
}
