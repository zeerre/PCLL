#include<bits/stdc++.h>
using namespace std;
const int NN = 100+4;
struct Building{
  int id;
  double x,y,w,d,h;
  bool operator<(const Building& rhs) const{
    return x<rhs.x||(x==rhs.x&& y<rhs.y);
  }
}B[NN];
int N;
bool cover(const Building& b,double mx){return b.x<=mx && mx<=b.x+b.w;}
bool visible(const Building& b,double mx){
  if(!cover(b,mx)) return false;
  for(int k =0;k<N;++k)
    if(B[k].y<b.y&& B[k].h>=b.h&&cover(B[k],mx))
      return false;
  return true;
}
int main(){
  for(int kase=1;scanf("%d",&N)==1&& N;kase++){
    vector<double> x;
    for(int i=0;i<N;i++){
      Building& b =B[i];
      scanf("%lf%lf%lf%lf%lf",&b.x,&b.y,&b.w,&b.d,&b.h);
      x.push_back(b.x),x.push_back(b.x+b.y);
      b.id=i+1;
    }
    sort(B,B+N),sort(x.begin(),x.end());
    int m=unique(x.begin(),x.end())-x.begin();
    if(kase>1) puts("");
    printf("For map #%d,the visible building are numbered as follows:\n%d",kase,B[0].id);
    for(int i=1;i<N;++i){
      bool vis=false;
      for(int j=0;j<m-1;++j)
	if(visible(B[i],(x[j]+x[j+1])/2)) {vis=true;break;}
      if(vis) printf(" %d",B[i].id);
    }
    puts("");
  }
  return 0;
}
