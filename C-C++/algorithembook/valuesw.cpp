#include<bits/stdc++.h>
using namespace std;

const int NN=4000+8;
int A[NN],B[NN],C[NN],D[NN],sums[NN*NN];
int main(){
  int T,n,c;
  scanf("%d",&T);
  while(T--){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	  scanf("%d%d%d%d",&A[i],&B[i],&C[i],&D[i]);
	c=0;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
		sums[c++]=A[i]+B[j];
	sort(sums,sums+c);
	long long cnt=0;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++){
		pair<int* ,int*> p= equal_range(sums,sums+c,-C[i]-D[j]);
		cnt+=p.second-p.first;
	  }
	printf("%lld\n",cnt);
	if(T) printf("\n");
  }
  return 0;
}
