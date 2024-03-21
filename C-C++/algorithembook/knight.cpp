#include<bits/stdc++.h>
using namespace std;

int DX[]={1,2,1,2,-1,-2,-1,-2},DY[]={2,1,-2,-1,2,1-2,-1},N;
struct Point {
  int x,y;
  Point(int x=0, int y=0):x(x),y(y) {}
  bool operator==(const Point& p) const{
	return x==p.x && y==p.y;
  }
};
queue<Point> Qs[2];
bool Vis[2][305][305];

bool BFS(int qi){
  queue<Point> &q=Qs[qi];
  int sz=q.size();
  while(sz--){
	Point p=q.front();
	q.pop();
	for(int i=0;i<8;++i){
	  int nx=p.x+DX[i],ny=p.y+DY[i];
	  if(nx<0 || ny<0 || nx>=N || ny>=N || Vis[qi][nx][ny])
		continue;
	  Vis[qi][nx][ny]=true;
	  q.push(Point(nx,ny));
	  if(Vis[1^qi][nx][ny]) return true;
	}
  }
  return false;
}
int solve(const Point& s,const Point& e){
  if(s==e) return 0;
  memset(Vis,0,sizeof(Vis));
  while(!Qs[0].empty()) Qs[0].pop();
  while(!Qs[1].empty()) Qs[1].pop();
  Qs[0].push(s),Vis[0][s.x][s.y]=true;
  Qs[1].push(e),Vis[1][e.x][e.y]=true;
  int step=0;
  while(!Qs[0].empty()||!Qs[1].empty()){
	bool met=BFS(0);
	step++;
	met=BFS(1),++step;
	if(met) return step;
  }
  return -1;
}
int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  Point s,e;
  int t;
  cin>>t;
  while(t--){
	cin>> N;
	cin>> s.x>>s.y>>e.x>>e.y;
	cout<< solve(s,e)<<endl;
  }
  return 0;
}
