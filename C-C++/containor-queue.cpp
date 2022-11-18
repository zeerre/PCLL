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
#define N 100
using namespace std;

struct queuest{
    int data[N];
    int front,rear;
};
void createqueue(struct queuest *q){
    q->front=-1;
    q->rear=-1;
}
int isfull(struct queuest *q){
    if(q->front==0&&q->rear==N-1){
        return true;
    }else{
        return false;
    }
}
int isempty(struct queuest *q){
    if(q->front==-1){
        return 1;
    }else{
        return 0;
    }
}
void pushqueue(struct queuest *q,int item){
    if(isfull(q)){
        cout<<"Queue FULL!\n";
        //return;
    }else{
        if(isempty(q))
            q->front=0;
        q->rear += 1;
        q->data[q->rear]=item;
        cout<<"Insert element:"<<q->data[q->rear]<<endl;
    }
}
void popqueue(struct queuest* q){
    int temp;
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
void display(struct queuest* q){
    if(isempty(q)) {
        cout<<"Empty Queue!!\n";
    }else{
        for(int i=q->front;i<=q->rear;i++)
            cout<<q->data[i]<<" ";
        cout<<endl;
    }
}
int main(){
    struct queuest* t;
    //for(int i=0;i<10;i++){
        pushqueue(t,9);
    //}
    display(t);
    popqueue(t);
    display(t);
    return 0;
}
