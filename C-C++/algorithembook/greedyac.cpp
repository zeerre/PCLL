#include<bits/stdc++.h>
using namespace std;

struct Seg{
  int a,b;
  bool operator<(const Seg &s) const {
	if(b!=s.b) return b<s.b;
	return a>s.a;
  }
}A[100+4];
int main(){
  for(int n;scanf("%d",&n)==1&&n;){
	for(int i=0;i<n;i++) scanf("%d%d",&A[i].a,&A[i].b);
	sort(A,A+n);
	int ans=1,cur_b=A[0].b;
	for(int i=1;i<n;i++)
	  if(A[i].a>=cur_b) ans++,cur_b=A[i].b;
	printf("%d\n",ans);
  }
  return 0;
}
