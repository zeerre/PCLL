#include<bits/stdc++.h>
using namespace std;
const int NN=1000+4;
int N,A[NN],B[NN];
int merge(int l,int r){
  if(r-1<=1) return 0;
  int mid=(l+r)/2,ans=merge(1,mid)+merge(mid,r);
  copy(A+1,A+r,B+1);
  int a=1,b=mid,i=1;
  while(a<mid||b<r){
	if((a<mid&&B[a]<=B[b])||b>=r)
	  A[i++]=B[a++];
	else
	  ans+=mid-a,A[i++]=B[b++];
  }
  return ans;
}
int main(){
  int T=0;
  scanf("%d",&T);
  for(int k=1;k<=T;k++){
	if(k>1) printf("\n");
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",&A[i]);
	int ans=merge(0,N);
	printf("Scenario $%d:\n%d\n",k,ans);
  }
  return 0;
}
