#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  const int coeff[3]={2,3,5};
  priority_queue<LL,vector<LL>,greater<LL>> pq;
  set<LL> s;
  pq.push(1),s.insert(1);
  LL x;
  for(int i=1;x=pq.top(),pq.pop(),x;i++){
    if(i==1500){
      cout<<"The 1500`th ugly number is "<< x<<".\n";
      break;
    }
    for(int j=0;j<3;j++){
      LL x2=x*coeff[j];
      if(!s.count(x2)) s.insert(x2),pq.push(x2);
    }
  }
  return 0;
}
