#include<bits/stdc++.h>
using namespace std;
const int maxt=1000+4;
typedef queue<int> IntQ;
char cmd[16];
int main(){
  for(int t,kase=1;scanf("%d",&t)==1&&t;kase++){
    printf("Scenario #%d\n",kase);
    map<int,int> team;
    for(int i=0,n,x;i<t;i++){
      scanf("%d",&n);
      while(n--) scanf("%d",&x),team[x]=i;
    }
    IntQ tq,qs[maxt];
    for(int x;scanf("%s",cmd)==1&&cmd[0]!='S';){
      if(cmd[0]=='D'){
	IntQ &q=qs[tq.front()];
	printf("%d\n",q.front()),q.pop();
	if(q.empty()) tq.pop();
      }
      else if(cmd[0]=='E'){
	scanf("%d",&x);
	IntQ &q=qs[team[x]];
	if(q.empty()) tq.push(team[x]);
	q.push(x);
      }
    }
    puts("");
  }
  return 0;
}


