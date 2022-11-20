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
#define N 10
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
    int num;
    struct node *next,*head;

};
//void initque(struct node* p){
//    p->head=NULL;
//    p->num=0;
//}
void pushque(struct node* p,int data){
    struct node* t=new struct node();
    struct node* temp;
    t->data=data;
    t->next=NULL;
    temp=p;
    if(p==NULL){
        p->head=t;
        p->num+=1;
        p=t;
        return;
    }
    if(p!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=t;
        p->num+=1;
        return;
    }
}
void popque(struct node* p){
  struct node* temp;
  if(temp==NULL){
    cout<<"Empty Queue!"<<endl;
    return;
  }else{
    //p->head=p->next;
    //temp=temp->next;
    p=temp;
    return;
  }
}
  
void display(struct node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=100;
    //    initque(p);
    display(p);
    for(int i=0;i<10;i++)
      pushque(p,i);
    display(p);
    popque(p);
    display(p);
    return 0;
}
