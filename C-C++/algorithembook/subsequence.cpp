#include<bits/stdc++.h>
using namespace std;

const int maxn=1e5+8;
int A[maxn],B[maxn];
int main(){
  for(int n,s;scanf("%d%d",&n,&s)==2 && n;){
    for(int i=1;i<=n;i++) scanf("%d",&A[i]);
    B[0]=0;
    for(int i=1;i<=n;i++) B[i]=B[i-1]+A[i];
    int ans=n+1,i=1;
    for(int j=1;j<=n;j++){
      if(B[i-1]>B[j]-s) continue;
      while(B[i]<=B[j]-s) i++;
      ans=min(ans,j-i+1);
    }
    printf("%d\n",ans==n+1?0:ans);
  }
  return 0;
}
