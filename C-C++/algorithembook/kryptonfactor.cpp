#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int N,L;
// s[st1...]==s[st2...],size=len;
bool rangeEqual(const string& s,int st1,int st2,int len){
  return equal(s.begin()+st1,s.begin()+st1+len,s.begin()+st2);
}
bool dfs(int& k,string& cur,string& ans){
  if(!cur.empty() && ++k == N){
	ans=cur;
	return true;
  }
  for(char ch='A';ch<'A'+L;ch++)
	if(cur.empty() || cur.back()!=ch){
	  cur+=ch;
	  bool valid=true;
	  int sz=cur.size();
	  string::iterator sit=cur.begin();
	  for(int l=2;l<=sz/2;l++){
		if(rangeEqual(cur,sz-l,sz-l*2,1)){
		  valid=false;
		  break;
		}
	  }
	  if(valid && dfs(k,cur,ans)) return true;
	  cur.pop_back();
	}
  return false;
}
int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  while(cin>>N>>L && N && L){
	string cur,ans;
	int k=0;
	dfs(k,cur,ans);
	for(size_t i=0;i<ans.size();i++){
	  cout<<ans[i];
	  if(i==63 || i==ans.size()-1) cout<<endl;
	  else if(i%4 == 3) cout<< " ";
	}
	cout<<ans.size()<<endl;
  }
  return 0;
}
