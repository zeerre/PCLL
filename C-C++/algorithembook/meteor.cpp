#include<bits/stdc++.h>
using namespace std;

void update(int x,int a,int w,double& l,double& r){
  if(a==0){
	if(x<=0 ||x>=w) r=l-1;
  }else if(a>0){
	l=max(l,-(double)x/a);
	r=min(r,(double)(w-x)/a);
  }else{
	l=max(l,(double)(w-x)/a);
	r=min(r,-(double)x/a);
  }
}
const int maxn=100000+10;
struct event{
  double x;
  int type;
  bool operator<(const event& a) const{
	return x<a.x||(x==a.x && type> a.type);
  }
}events[maxn*2];
int main(){
  int T;
  scanf("%d",&T);
  while(T--){
	int w,h,n,e=0;
	scanf("%d%d%d",&w,&h,&n);
	for(int i=0;i<n;i++){
	  int x,y,a,b;
	  scanf("%d%d%d%d",&x,&y,&a,&b);
	  //0<x+at<w,0<y+bt<h,t>=0
	  double l=0,r=1e9;
	  update(x,a,w,l,r);
	  update(y,b,h,l,r);
	  if(r>l){
		events[e++]=(event){l,0};
		events[e++]=(event){r,1};
	  }
	}
	sort(events,events+e);
	int cnt=0,ans=0;
	for(int i=0;i<e;i++){
	  if(events[i].type==0) ans=max(ans,++cnt);
	  else cnt--;
	}
	printf("%d\n",ans);
  }
  return 0;
}
