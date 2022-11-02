//*************************************************************************
//* File Name: binsort.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-27  09-43-07====
//*************************************************************************

#include <iostream>
using namespace std;
long a[]={1,3,5,14,23,32,36,44,45};
void binsort(int ,int,long);
int num=0;
int main() {
    long input;
    cin>>input;
    binsort(0,sizeof(a)/sizeof(a[0]),input);
    return 0;
}
void binsort(int begin,int last, long pur){
    int mid;
    mid=(begin+last)/2;
    num++;
    if(pur>a[mid]){
 	    
	    mid+=1;
	    if(mid<=last){
		    binsort(mid,last,pur);
	    }else{
            cout<<"NULL"<<endl;
            cout<<"Totle: "<<num<<endl;
        }
    }else if(pur<a[mid]){
	    
	    mid-=1;
	    if(mid>=0){
		    binsort(0,mid,pur);
	    }else{
            cout<<"NULL"<<endl;
            cout<<"Totle: "<<num<<endl;
        }
    }else if(pur==a[mid]){
        
        cout<<"Finded!! "<<a[mid]<<" Run "<<num<<" rate."<<endl;
    }
}
