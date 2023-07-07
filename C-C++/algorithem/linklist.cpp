//*************************************************************************
//* File Name: linklist.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-15  14-28-55====
//*************************************************************************

//Insert Elements to a Linked List
//
//You can add elements to either the beginning, middle or end of the linked list.
//
//1. Insert at the beginning
//Allocate memory for new node
//Store data
//Change next of new node to point to head
//Change head to point to recently created node
//struct node *newNode;
//newNode = malloc(sizeof(struct node));
//newNode->data = 4;
//newNode->next = head;
//head = newNode;
//2. Insert at the End
//Allocate memory for new node
//Store data
//Traverse to last node
//Change next of last node to recently created node
//struct node *newNode;
//newNode = malloc(sizeof(struct node));
//newNode->data = 4;
//newNode->next = NULL;
//
//struct node *temp = head;
//while(temp->next != NULL){
//  temp = temp->next;
//}
//
//temp->next = newNode;
//3. Insert at the Middle
//Allocate memory and store data for new node
//Traverse to node just before the required position of new node
//Change next pointers to include new node in between
//struct node *newNode;
//newNode = malloc(sizeof(struct node));
//newNode->data = 4;
//
//struct node *temp = head;
//
//for(int i=2; i < position; i++) {
//  if(temp->next != NULL) {
//    temp = temp->next;
//  }
//}
//newNode->next = temp->next;
//temp->next = newNode;
//Delete from a Linked List
//You can delete either from the beginning, end or from a particular position.
//
//1. Delete from beginning
//Point head to the second node
//head = head->next;
//2. Delete from end
//Traverse to second last element
//Change its next pointer to null
//struct node* temp = head;
//while(temp->next->next!=NULL){
//  temp = temp->next;
//}
//temp->next = NULL;
//3. Delete from middle
//Traverse to element before the element to be deleted
//Change next pointers to exclude the node from the chain
//for(int i=2; i< position; i++) {
//  if(temp->next!=NULL) {
//    temp = temp->next;
//  }
//}
//
//temp->next = temp->next->next;
//Search an Element on a Linked List
//You can search an element on a linked list using a loop using the following steps. We are finding item on a linked list.
//
//Make head as the current node.
//Run a loop until the current node is NULL because the last element points to NULL.
//In each iteration, check if the key of the node is equal to item. If it the key matches the item, return true otherwise return false.
//// Search a node
//bool searchNode(struct Node** head_ref, int key) {
//  struct Node* current = *head_ref;
//
//  while (current != NULL) {
//    if (current->data == key) return true;
//      current = current->next;
//  }
//  return false;
//}
//Sort Elements of a Linked List
//We will use a simple sorting algorithm, Bubble Sort, to sort the elements of a linked list in ascending order below.
//
//Make the head as the current node and create another node index for later use.
//If head is null, return.
//Else, run a loop till the last node (i.e. NULL).
//In each iteration, follow the following step 5-6.
//Store the next node of current in index.
//Check if the data of the current node is greater than the next node. If it is greater, swap current and index.
//Check the article on bubble sort for better understanding of its working.
//
//// Sort the linked list
//void sortLinkedList(struct Node** head_ref) {
//  struct Node *current = *head_ref, *index = NULL;
//  int temp;
//
//  if (head_ref == NULL) {
//    return;
//  } else {
//    while (current != NULL) {
//      // index points to the node next to current
//      index = current->next;
//
//  	while (index != NULL) {
//        if (current->data > index->data) {
//          temp = current->data;
//          current->data = index->data;
//          index->data = temp;
//    	  }
//    	  index = index->next;
//  	}
//  	current = current->next;
//    }
//  }
//}

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
void deletenode(struct node** p){
    struct node* temp=new node();
    temp=(*p)->next;
    *p=temp;
}
void deletenumnode(struct node** p,int key){
	struct node* temp=new node();
	struct node* prev;
	temp=(*p);
	if (temp != NULL && temp->data == key) {
		*p = temp->next;
		return;
	}
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL) return;
	prev->next = temp->next;
}
void sortnode(struct node** p){
    struct node* current=(*p);
    struct node* index=NULL;
    int temp;
    if(p==NULL){
        return;
    }else{
        while(current!=NULL){ //bubble algorithm.
            index=current->next;
            while(index!=NULL){
                if(current->data > index->data){
                    temp=current->data;
                    current->data=index->data;
                    index->data=temp;
                }
                index=index->next;
            }
            current=current->next;
        }
    }
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
    deletenode(&n);
    deletenumnode(&n,0);
    inserthead(&n,66);
    deletenumnode(&n,10);
    insertail(&n,10);
    display(n);
    sortnode(&n);
    display(n);
    return 0;
}
