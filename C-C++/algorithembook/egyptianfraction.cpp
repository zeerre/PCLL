#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int A,B;
vector<LL> D, Ans;
bool better(){
  if(Ans.empty()) return true;
  assert(D.size()==Ans.size());
  for(int i=D.size()-1;i>=0;i--)
	if(D[i]!=Ans[i]) return D[i]<Ans[i];
  return false;
}
//a/b+1/c=A/B->1/c<=A/B-a/b=(A*b-a*B)/(B*b)->c>=(B*b)/A*b-a*B)
inline LL firstc(LL a,LL b,LL last){
  return max(B*b/(A*b-a*B),last+1);
}
void dfs(LL a,LL b,const int d,const int maxd){
  if(d>maxd || a*B>A*b) return;
  if(A*b==a*B){
	if(better()) Ans=D;
	return;
  }
  LL lastc=D.empty()? 1LL :D.back();
  for(LL c=firstc(a,b,lastc);a*B*c+(maxd-d)*B*b>=A*b*c;++c)
	D.push_back(c),dfs(a*c+b,b*c,d+1,maxd),D.pop_back();
}
int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  cin>>A>>B;
  for(int maxd=2;maxd<=100;maxd++){
	dfs(0,1,0,maxd);
	if(!Ans.empty()){
	  for(size_t i=0;i<Ans.size();i++)
		printf("%s%lld",(i?" ":""),Ans[i]);
	  puts("");
	  break;
	}
  }
  return 0;
}
