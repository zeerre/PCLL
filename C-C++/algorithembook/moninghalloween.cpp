#include<bits/stdc++.h>
using namespace std;

#define _for(i,a,b) for(int i=(a);i<(int)(b);++i)

typedef long long LL;
const int MAXH=16+4,MAXV=16*16;
const int DX[]={-1,1,0,0,0},DY[]={0,0,-1,1,0};
int W,H,N,V,ID[16][16],X[MAXV],Y[MAXV];
int D[MAXV][MAXV][MAXV],Src[3],Dest[3];
char MAP[MAXH][MAXH];
vector<int> G[MAXV];
inline int enc(int a,int b,int c){return (a<<16)+(b<<8)+c;}
inline bool conflict(int a,int b,int na,int nb){
  assert(a!=b);
  if (na==nb) return true;
  if(na==b&&nb==a) return true;
  return false;
}
int bfs(){
  memset(D,-1,sizeof(D));
  queue<int> Q;
  Q.push(enc(Src[0],Src[1],Src[2])),D[Src[0]][Src[1]][Src[2]]=0;
  while(!Q.empty()){
	int x=Q.front(),a= x>>16,b= (x>>8)&255,c= x&255;
	Q.pop();
	int d=D[a][b][c];
	if(a==Dest[0] && b==Dest[1] && c==Dest[2]) return d;
	for(size_t ai=0;ai<G[a].size();ai++){
	  int na=G[a][ai];
	  for(size_t bi=0;bi<G[b].size();bi++){
		int nb=G[b][bi];
		if(conflict(a,b,na,nb)) continue;
		for(size_t ci=0;ci<G[c].size();ci++){
		  int nc=G[c][ci],&nd=D[na][nb][nc];
		  if(!conflict(a,c,na,nc) && !conflict(b,c,nb,nc) && nd==-1)
			nd=D[a][b][c]+1,Q.push(enc(na,nb,nc));
		}
	  }
	}
  }
  return -1;
}
int main(){
  while(scanf("%d%d%d",&W,&H,&N)==3&&W){
	getchar();
	_for(r,0,H) fgets(MAP[r],MAXH,stdin);
	V=0;
	_for(r,0,H) _for(c,0,W){
	  char ch=MAP[r][c];
	  if(ch == '#') continue;
	  ID[r][c]=V,X[V]=r,Y[V]=c;
	  if(isupper(ch)) Dest[ch-'A']=V;
	  if(islower(ch)) Src[ch-'a']=V;
	  ++V;
	}
	_for(u,0,V){
	  G[u].clear();
	  int x=X[u],y=Y[u];
	  _for(d,0,5){
	  int nx=x+DX[d],ny=y+DY[d];
	  if(0<=nx && nx<H && 0<=ny && ny<W && MAP[nx][ny]!='#')
		G[u].push_back(ID[nx][ny]);
	  }
	}
	if(N<=2) Src[2]=Dest[2]=V,G[V].clear(),G[V].push_back(V),++V;
	if(N<=1) Src[1]=Dest[1]=V,G[V].clear(),G[V].push_back(V),++V;
	printf("%d\n",bfs());
  }
  return 0;
}
