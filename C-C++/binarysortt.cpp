#include<iostream> 
using namespace std;
int list[100+1]={1,3,5,14,23,32,36,44,45};
int mid=0;
int item=2;
int i=0;
int num=0;
void binary_search(int low,int high){
	mid=(low+high)/2;
	num++;
	//cout<<low<<" "<<high<<" ";	cout<<mid<<" "<<endl;
	if(low>high) {
        if(list[mid]==item) 
            cout<<mid<<" "<<num<<endl;
        else 
            cout<<"NUll"<<" "<<num<<endl;
        return;
	}else
        if(list[mid]>item) 
            binary_search(low,mid-1);
		else if(list[mid]<item) 
            binary_search(mid+1,high);
}
int main(){
	binary_search(0,11);
	return 0;
}
