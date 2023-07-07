//*************************************************************************
//* File Name: containor-stack.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-18  09-13-27====
//*************************************************************************

//Member functions
//(constructor) 	Construct stack (public member function) 
//empty 			Test whether container is empty (public member function) 
//size 				Return size (public member function) 
//top 				Access next element (public member function) 
//push 				Add element (public member function) 
//pop 				Remove element (public member function) 

#include<bits/stdc++.h>
using namespace std;
#define N 100
int num=0;
struct stackprc{
    int top;
    int item[N];
};
void createst(struct stackprc *s){
    s->top=-1;
}
int isfull(struct stackprc *s){
    if(s->top==N-1){
        return 1;
    }else{
        return 0;
    }
}
int isempty(struct stackprc *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
void pushstack(struct stackprc *s,int newitem){
    if(isfull(s)){
        cout<<"stack FULL!!";
    }else{
        s->top++;
        s->item[s->top]=newitem;
    }
    num++;
}
void popstack(struct stackprc *s){
    if(isempty(s)){
        cout<<"\nStack Empty!!\n";
    }else{
        cout<<"\nPop element is: "<<s->item[s->top]<<endl;
        s->top--;
        cout<<"\nCurrent stack top element is :"<<s->item[s->top]<<endl;
    }
    num--;
}
void display(struct stackprc *s){
    cout<<"Stack:";
    for(int i=0;i<num;i++){
        cout<<s->item[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int item;
    struct stackprc *s =new struct stackprc();
    createst(s);
    for(int i=0;i<10;i++){
        pushstack(s,i);
    }
    display(s);
    for(int i=0;i<3;i++){
        popstack(s);
    }
    display(s);
    return 0;
}
