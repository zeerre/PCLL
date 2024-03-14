#include<bits/stdc++.h>
using namespace std;

#define _for(i,a,b) for(int i=(a);i<(b);++i)
const int NN =1e6+8;
int n,k,a[NN],q[NN];
int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  cin>>n>>k;
  _for(i,0,n) cin>>a[i];
  int head=0,tail=0;
  _for(i,0,n){
	while(head<tail && q[head]<=i-k) ++head;
	while(head<tail && a[q[tail-1]] >= a[i]) --tail;
	q[tail++] =i;
	if(i>=k-1) cout<<a[q[head]]<<(i==n-1?"\n":" ");
  }
  return 0;
}
