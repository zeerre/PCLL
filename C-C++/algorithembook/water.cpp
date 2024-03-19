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
