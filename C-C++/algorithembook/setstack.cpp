#include<bits/stdc++.h>
using namespace std;
typedef set<int> Set;
map<Set,int> IDcache;
vector<Set> Setcache;
int ID(const Set& x){
  if(IDcache.count(x)) return IDcache[x];
  Setcache.push_back(x);
  return IDcache[x]=Setcache.size()-1;
}
int main(){
  int T,n;
  cin>>T;
  Set empty,x;
  while(T--){
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
      string op;
      cin>>op;
      if(op[0]=='P') s.push(ID(empty));
      else if(op[0]=='D') s.push(s.top());
      else{
	const Set &x1=Setcache[s.top()];
	s.pop();
	const Set &x2=Setcache[s.top()];
	s.pop();
	x.clear();
	if(op[0]=='U')
	  set_union(x1.begin(),x1.end(),x2.begin(),x2.end(),inserter(x,x.begin()));
	if(op[0]=='I')
	  set_intersection(x1.begin(),x1.end(),x2.begin(),x2.end(),inserter(x,x.begin()));
	if(op[0]=='A') x=x2,x.insert(ID(x1));
	s.push(ID(x));
      }
      cout<<Setcache[s.top()].size()<<endl;
    }
    cout<<"***"<<endl;
  }
  return 0;
}
