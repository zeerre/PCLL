#include<bits/stdc++.h>
using namespace std;

#define _for(i,a,b) for(int i=(a);i<(b);i++)
typedef long long LL;
const int MAXN=1e5+4;
int A[MAXN];
int main(){
  int n,T;
  scanf("%d",&T);
  while(T--){
    scanf("%d",&n);
    _for(i,0,n) scanf("%d",&(A[i]));
    int m=A[0],ans=A[0]-A[1];
    _for(i,1,n)
      ans=max(m-A[i],ans),m=max(A[i],m);
    printf("%d\n",ans);
  }
  return 0;
}
