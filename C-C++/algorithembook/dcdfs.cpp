#include<bits/stdc++.h>
using namespace std;
int A,B,Ans;
typedef long long LL;
inline void dfs(LL cur,LL last_d){
  if(cur>=A) Ans++;
  for(int d=last_d;d<10;++d)
	if(cur*10+d<B) dfs(cur*10+d,d);
}
int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  while(cin>>A>>B){
	Ans=0;
	dfs(0,1);
	cout<<Ans<<endl;
  }
  return 0;
}
