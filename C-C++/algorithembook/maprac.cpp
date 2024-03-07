#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int maxr=10000+5,maxc=10+5;
int m,n,db[maxr][maxc],cnt;
map<string,int> id;
int ID(const string& s){
  if(!id.count(s)) id[s]=++cnt;
  return id[s];
}
void find(){
  for(int c1=0;c1<m;c1++)
    for(int c2=c1+1;c2<m;c2++){
      map<PII,int> d;
      for(int i=0;i<n;i++){
	PII p=make_pair(db[i][c1],db[i][c2]);
	if(d.count(p)){
	  puts("NO");
	  printf("%d %d\n",d[p]+1,i+1);
	  printf("%d %d\n",c1+1,c2+1);
	  return;
	}
	d[p]=i;
      }
    }
  puts("YES");
}
int main(){
  string s;
  ios::sync_with_stdio(false),cin.tie(0);
  while(getline(cin,s)){
    stringstream ss(s);
    if(!(ss>>n>>m)) break;
    cnt=0,id.clear();
    for(int i=0;i<n;i++){
      getline(cin,s);
      int lastpos=-1;
      for(int j=0;j<m;j++){
	size_t p=s.find(',',lastpos+1);
	if(p==string::npos) p=s.length();
	db[i][j]=ID(s.substr(lastpos+1,p-lastpos-1));
	lastpos=p;
      }
    }
    find();
  }
  return 0;
}
