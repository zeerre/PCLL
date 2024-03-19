#include<bits/stdc++.h>

using namespace std;

const int NN=1024+8;
int A[NN];
int main(){
  int T,n,K;
  scanf("%d",&T);
  while(T--){
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;++i) scanf("%d", &A[i]);
	for(int i=0;i<K;i++) next_permutation(A,A+n);
	for(int i=0;i<n;++i) printf("%d ",A[i]);
	puts("");
  }
  return 0;
}
