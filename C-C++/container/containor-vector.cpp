////*************************************************************************
////* File Name: containor-vector.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-18  09-11-00====
////*************************************************************************
//
//Member functions
//(constructor)             |Construct vector (public member function) 
//(destructor)              |Vector destructor (public member function) 
//operator=                 |Copy vector content (public member function) 
//
//Iterators:
//begin                     |Return iterator to beginning (public member type) 
//end                       |Return iterator to end (public member function) 
//rbegin                    |Return reverse iterator to reverse beginning (public member function) 
//rend                      |Return reverse iterator to reverse end (public member function) 
//
//Capacity:
//size                      |Return size (public member function) 
//max_size                  |Return maximum size (public member function) 
//resize                    |Change size (public member function) 
//capacity                  |Return size of allocated storage capacity (public member function) 
//empty                     |Test whether vector is empty (public member function) 
//reserve                   |Request a change in capacity (public member function) 
//
//Element access:
//operator[]                |Access element (public member function) 
//at                        |Access element (public member function) 
//front                     |Access first element (public member function) 
//back                      |Access last element (public member function) 
//
//
//Modifiers:
//assign                    |Assign vector content (public member function) 
//push_back                 |Add element at the end (public member function) 
//pop_back                  |Delete last element (public member function) 
//insert                    |Insert elements (public member function) 
//erase                     |Erase elements (public member function) 
//swap                      |Swap content (public member function) 
//clear                     |Clear content (public member function) 
//
//Allocator:
//get_allocator Get allocator (public member function) 
//
//Member types
//of template <class T, class Allocator=allocator<T> > class vector;
//member type               |definition 
//reference 				|Allocator::reference 
//const_reference 			|Allocator::const_reference 
//iterator 					|Random access iterator 
//const_iterator 			|Constant random access iterator 
//size_type 				|Unsigned integral type (usually same as size_t) 
//difference_type 			|Signed integral type (usually same as ptrdiff_t) 
//value_type 				|T 
//allocator_type 			|Allocator 
//pointer 					|Allocator::pointer 
//const_pointer 			|Allocator::const_pointer 
//reverse_iterator 			|reverse_iterator<iterator> 
//const_reverse_iterator 	|reverse_iterator<const_iterator> 


#include <bits/stdc++.h>

using namespace std;

struct node{
  int data;
  struct node* next;
  struct node* prev;
};
struct node* newnode(int data){
  struct node* p=(struct node*)malloc(sizeof(struct node));
  //struct node* p=new struct node();
  p->data=data;
  p->next=NULL;
  p->prev=NULL;
  return p;
}

void pushnode(struct node* p,int data){
  struct node* temp=newnode(data);
  if(p==NULL){
    temp->data=data;
    p=temp;
  }else{
    if(p->next==NULL){
      p->next=temp;
      temp->prev=p;
    }else{
      struct node* t;
      t=p;
      while(t->next!=NULL){
	t=t->next;
      }
      t->next=temp;
      temp->prev=t;
    }
  }
}
void display(struct node* p){
  struct node* tem;
  tem=p;
  while(tem!=NULL){
    cout << tem->data << " ";
    tem=tem->next;
  }
  cout<<endl;
}
void function(struct node* p){
  
}
int main(){
  struct node* n=newnode(0);
  pushnode(n,1);
  display(n);
  pushnode(n,2);
  display(n);
  return 0;
}
