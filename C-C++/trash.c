//*************************************************************************
//* File Name: c.c
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-10-26  07-57-46====
//*************************************************************************

#include<iostream> 
using namespace std;
int list[100+1]={3,5,7,11,25,32,37,41,46,55,70,80};
int mid=0;int item=7;int i=0;
void binary_search(int low,int high){
	mid=(low+high)/2;
	//cout<<low<<" "<<high<<" ";	cout<<mid<<" "<<endl;
	if(low==high) 
		{if(list[mid]==item) cout<<mid<<endl;else cout<<"NUll"<<endl;return;}
	else
		if(list[mid]>item) binary_search(low,mid-1);
		else if(list[mid]<item) binary_search(mid+1,high);
}
int main(){
	binary_search(0,11);
	return 0;
}
