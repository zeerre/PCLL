#include<bits/stdc++.h>
using namespace std;

const int NN=1e5+4;
int N,A[NN];
int main(){
  scanf("%d",&N);
  for(int i=0;i<N;i++) scanf("%d",&A[i]);
  int k=N/2;
  nth_element(A,A+k,A+N);
  printf("%d\n",A[k]);
  return 0;
}
