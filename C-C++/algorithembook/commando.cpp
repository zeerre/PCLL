#include<bits/stdc++.h>
using namespace std;

struct Job{
  int j,b;
  bool operator<(const Job& x) const{
	return j>x.j;
  }
};
int main(){
  ios::sync_with_stdio(false),cin.tie(0);;
  for(int n,b,j,kase=1;cin>>n&&n;kase++){
	vector<Job> v(n);
	for(int i=0;i<n;i++) cin>>v[i].b>>v[i].j;
	sort(v.begin(),v.end());
	int ans=0;
	for(int i=0,s=0;i<n;i++){
	  ans+=max(ans,v[i].j);
	}
	printf("Case %d:  %d\n",kase,ans);
  }
  return 0;
}
