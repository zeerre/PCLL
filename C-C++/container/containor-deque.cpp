//*************************************************************************
////* File Name: containor-deque.cpp
////* Author:GeekBear
////* Mail:zeerre98988@gmail.com 
////* Created And Modified Time: ====2022-11-18  09-11-09====
////*************************************************************************
//
//Member functions
//(constructor)                             |Construct deque container (public member function) 
//(destructor)                              |Deque destructor (public member function) 
//operator=                                 |Copy container content (public member function) 
//
//Iterators:
//begin                                     |Return iterator to beginning (public member function) 
//end                                       |Return iterator to end (public member function) 
//rbegin                                    |Return reverse iterator to reverse beginning (public member function) 
//rend                                      |Return reverse iterator to reverse end (public member function) 
//
//
//Capacity:
//size                                      |Return size (public member function) 
//max_size                                  |Return maximum size (public member function) 
//resize                                    |Change size (public member functions) 
//empty                                     |Test whether container is empty (public member function) 
//
//
//Element access:
//operator[]                                |Access element (public member function) 
//at                                        |Access element (public member function) 
//front                                     |Access first element (public member function) 
//back                                      |Access last element (public member function) 
//
//
//Modifiers:
//assign                                    |Assign container content (public member function) 
//push_back                                 |Add element at the end (public member function) 
//push_front                                |Insert element at beginning (public member function) 
//pop_back                                  |Delete last element (public member function) 
//pop_front                                 |Delete first element (public member function) 
//insert                                    |Insert elements (public member function) 
//erase                                     |Erase elements (public member function) 
//swap                                      |Swap content (public member function) 
//clear                                     |Clear content (public member function) 
//
//
//Allocator:
//get_allocator                             |Get allocator (public member function) 
//
//
//
//Member types
//of template <class T, class Allocator=allocator<T> > class deque;
//member type                               |definition 
//reference                                 |Allocator::reference 
//const_reference                           |Allocator::const_reference 
//iterator                                  |Random access iterator 
//const_iterator                            |Constant random access iterator 
//size_type                                 |Unsigned integral type (usually same as size_t) 
//difference_type                           |Signed integral type (usually same as ptrdiff_t) 
//value_type                                |T 
//allocator_type                            |Allocator 
//pointer                                   |Allocator::pointer 
//const_pointer                             |Allocator::const_pointer 
//reverse_iterator                          |reverse_iterator<iterator> 
//const_reverse_iterator                    |reverse_iterator<const_iterator> 
//
//

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* prev;
    struct node* next;
};
void initdeque(struct node** p){
    *p=NULL;
}
void fpushdeque(struct node** p,int data){
    struct node* n=new struct node();
    if(*p==NULL){
        n->next=NULL;
        n->data=data;
        *p=n;
    }else{
        n->data=data;
        n->next=(*p);
        n->prev=(*p)->prev;
        (*p)->prev=n;
        *p=n;
    }
}
void epushdeque(struct node** p,int data){
    struct node* n=new struct node();
    if(*p==NULL){
        n->data=data;
        n->next=NULL;
        n->prev=NULL;
        *p=n;
    }else{
        struct node* temp;
        temp=(*p);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        n->data=data;
        n->next=temp->next;
        temp->next=n;
        n->prev=temp;
    }
}
void fpopdeque(struct node** p){
    if(*p==NULL){
        cout<<"Empty Deque!!"<<endl;
    }else{
        struct node* temp;
        temp=(*p);
        if(temp->next==NULL){
            temp=NULL;
            *p=temp;
        }else{
            temp=temp->next;
            temp->prev=NULL;
            *p=temp;
        }
    }
}
void epopdeque(struct node** p){
    struct node* temp;
    if(p==NULL){
        cout<<"Empty Queue!!"<<endl;
    }else{
        temp=(*p);
        if(temp->next==NULL){
            temp=NULL;
            (*p)=temp;
        }else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->prev->next=temp->next;
            temp=temp->prev;
        }
    }
}
/*
void deldeque(struct node** p,int key){
    struct node* temp;
    temp=(*p);
    if(temp==NULL){
        cout<<"Empty Deque."<<endl;
    }else{
        while(temp->next!=NULL&&temp->prev!=NULL&&temp->data==key){
            struct node* t1=temp->next;
            struct node* t2=temp->prev;
            t1->prev=t2;
            t2->next=t1;
            temp=t1;
        }
    }
}
*/
void display(struct node** p){
    struct node* temp;
    temp=(*p);
    if(temp==NULL){
        cout<<"Empty Deque!!"<<endl;
    }else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main(){
    struct node* p=new struct node();
    initdeque(&p);
    display(&p);
    fpushdeque(&p,99);
    display(&p);
    for(int i=0;i<10;i++){
        epushdeque(&p,i);
        fpushdeque(&p,i*2);
    }
    display(&p);
    for(int i=0;i<3;i++){
        fpopdeque(&p);
        epopdeque(&p);
    }
    display(&p);
    fpushdeque(&p,100);
    display(&p);
    epopdeque(&p);
    display(&p);
    epopdeque(&p);
    epopdeque(&p);
    display(&p);
//    deldeque(&p,0);
//    display(&p);
    return 0;
}
