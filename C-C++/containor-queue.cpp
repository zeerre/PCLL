//*************************************************************************
//* File Name: containor-queue.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com
//* Created And Modified Time: ====2022-11-18  09-11-06====
//*************************************************************************

//Member functions
//(constructor)         Construct queue (public member function)
//empty                 Test whether container is empty (public member function)
//size                  Return size (public member function)
//front                 Access next element (public member function)
//back                  Access last element (public member function)
//push                  Insert element (public member function)
//pop                   Delete next element (public member function)

#include<bits/stdc++.h>
using namespace std;
/*
struct queuest{
    char data[N];
    int front,rear;
};
void createqueue(struct queuest* q){
    q->front=-1;
    q->rear=-1;
}
void initqueue(struct queuest* q){
    q->front=0;
    q->rear=0;
    q->data[q->front]='N';
}
int isfull(struct queuest* q){
    if(q->front==0&&q->rear==N-1){
        return true;
    }else{
        return false;
    }
}
int isempty(struct queuest* q){
    if(q->front==-1){
        return true;
    }else{
        return false;
    }
}
void pushqueue(struct queuest* q,int item){
    if(isfull(q)){
        cout<<"Queue FULL!\n";
        //return;
    }else{
        if(isempty(q)){
            q->front=0;
            q->rear=0;
        }
        q->rear += 1;
        q->data[q->rear]=item;
        cout<<"Insert element:"<<q->data[q->rear]<<endl;
    }
}
void popqueue(struct queuest* q){
    char temp;
    if(isempty(q)){
        cout<<"Queue Empty!\n";
    }else{
        temp=q->data[q->front];
        if(q->front>=q->rear){
            q->front=-1;
            q->rear=-1;
        }else{
            q->front+=1;
        }
        cout<<"Pop element:"<<temp<<endl;
    }
}
int getlenth(struct queuest* q){
    return q->rear - q->front + 1;
}
void display(struct queuest* q){
    if(isempty(q)) {
        cout<<"Empty Queue!!\n";
    }else{
        cout<<"Queue element:";
        for(int i=q->front;i<=q->rear;i++)
            cout<<q->data[i]<<" ";
        cout<<endl;
    }
}
int main(){
    struct queuest* t=new queuest();
    display(t);
    //createqueue(t);
    //display(t);
    for(char i='a';i<'g';i++){
        pushqueue(t,i);
    }
    display(t);
    for(int i=1;i<4;i++)
        popqueue(t);
    display(t);
    cout<<getlenth(t)<<endl;
    return 0;
}

*/


struct node{
    int data;
    struct node* next;
};
void initque(struct node *p,int data){
    p->next=NULL;
    p->data=data;
}
void pushque(struct node** p,int data){
    struct node *newnode=new struct node();
    struct node* temp=(*p);
    if(temp==NULL){
        newnode->data=data;
        newnode->next=NULL;
        temp=newnode;
        *p=temp;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
    }
}
void popque(struct node** p){
    struct node* temp;
    temp=(*p);
    if(temp->next==NULL){
        temp=NULL;
    }else{
        temp=temp->next;
    }
    *p=temp;
}
void display(struct node *p){
    if(p==NULL) cout<<"Empty Queue!"<<endl;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    struct node* p=new struct node();
    initque(p,100);
    display(p);
    pushque(&p,101);
    display(p);
    popque(&p);
    popque(&p);
    display(p);
    for(int i=1;i<10;i++)
        pushque(&p,i);
    display(p);
    return 0;
}
