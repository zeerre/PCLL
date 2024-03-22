#include<bits/stdc++.h>
using namespace std;

const int SZ=8;
int v[SZ][SZ],P[SZ];
bool judge(){
  bool ok=true;
  for(int i=0;i<SZ;i++)
	for(int j=0;j<i;j++)
	  if(P[i]-i==P[j]-j||P[i]+i==P[j] +j) return false;
  return true;
}
int main(){
  int T;
  scanf("%d", &T);
  while(T--){
	for(int i=0;i<SZ;i++){
	  P[i]=i;
	  for(int j=0;j<SZ;j++) scanf("%d",&v[i][j]);
	}
	int ans=0;
	do{
	  if(!judge()) continue;
	  int sum=0;
	  for(int i=0;i<SZ;i++) sum+=v[i][P[i]];
	  ans=max(ans,sum);
	}while(next_permutation(P,P+SZ));
	printf("%5d\n",ans);
  }
  return 0;
}
