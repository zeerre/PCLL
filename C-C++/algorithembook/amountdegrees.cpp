#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int N,M,K,B,Ans;
void dfs(int c1,int cur,int pb){
  if(c1==K){
	if(cur>=N) Ans++;
	return;
  }
  for(LL next_pb=c1?pb*B:1;cur+next_pb<=M;next_pb*=B)
	dfs(c1+1,cur+next_pb,next_pb);
}
int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  cin>>N>>M>>K>>B;
  dfs(0,0,0);
  cout<<Ans<<endl;
  return 0;
}

	
