#include<bits/stdc++.h>
using namespace std;

#define _for(i,a,b) for(int i=(a);i<(b);i++)
typedef long long LL;
const int MAXN=1e6+4;
int A[MAXN];
int main(){
  int T,n;
  scanf("%d",&T);
  while(T--){
	scanf("%d",&n);
	_for(i,0,n) scanf("%d",&(A[i]));
	int L=0,R=1,ans=1;
	set<int> s={A[L]};
	while(R<n){
	  while(s.count(A[R])&&L<R) s.erase(A[L++]);
	  s.insert(A[R++]);
	  ans=max(ans,R-L);
	}
	printf("%d\n",ans);
  }
  return 0;
}
