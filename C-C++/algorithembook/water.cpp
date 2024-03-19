#include<bits/stdc++.h>
using namespace std;
const int MAXN=10240;
const double EPS=1e-11;
double dcmp(double x){
  if(fabs(x)<EPS)return 0;
  return x<0?-1:1;
}
struct Seg{
  double a,b;
  inline bool operator<(const Seg& rhs) const{
	return a<rhs.a||(a==rhs.a&&b<rhs.b);
  }
};
int solve(const vector<Seg> &segs,double len){
  int cnt=0;
  double start = 0.0,end=0.0;
  for(size_t i=0;i<segs.size();){
	start=end;
	if(dcmp(segs[i].a-start)>0) return -1;
	cnt++;
	while(i<segs.size()&&segs[i].a<=start){
	  if(dcmp(segs[i].b-end)>0) end=segs[i].b;
	  i++;
	}
	if(dcmp(end-len)>0) break;
  }
  if(dcmp(end-len)<0) cnt=-1;
  return cnt;
}
int main(){
  for(int n,l,w;scanf("%d%d%d",&n,&l,&w)==3;){
	double len=1,w2=w/2.0;
	vector<Seg> segs;
	for(int i=0,p,r;i<n;i++){
	  scanf("%d%d",&p,&r);
	  if(r*2<=w) continue;
	  double xw=sqrt((double)r*r-w2*w2),a=p-xw;
	  if(dcmp(a-len)>0) continue;
	  if(dcmp(a)<=0) a=0;
	  segs.push_back({a,p+xw});
	}
	sort(segs.begin(),segs.end());
	printf("%d\n",solve(segs,len));
  }
  return 0;
}
	   
	   
