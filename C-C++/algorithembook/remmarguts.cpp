#include<bits/stdc++.h>
using namespace std;

const int NN =1000+4,INF=0x3f3f3f3f;
typedef pair<int ,int > P;
struct Edge{
  int v,w;
  Edge(int t,int l):v(t),w(l){}
};
int N,TD[NN];
vector<Edge> G[NN],Rev[NN];
typedef Edge HeapNode;
struct cmpT{
  bool operator()(const HeapNode &a,const HeapNode &b){
	return a.w>b.w;
  }
};
void dijkstra(int s){
  priority_queue<HeapNode,vector<HeapNode>,cmpT> q;
  fill_n(TD,N+1,INF),TD[s]=0,q.push(HeapNode(s,0));
  while(!q.empty()){
	int u=q.top().v,w=q.top().w;
	q.pop();
	if(TD[u]<w) continue;
	for(size_t i=0;i<Rev[u].size();i++){
	  const Edge& e= Rev[u][i];
	  if(w+e.w<TD[e.v])
		TD[e.v]=w+e.w,q.push(HeapNode(e.v,TD[e.v]));
	}
  }
}
struct cmpAstar{
  bool operator()(const HeapNode &a,const HeapNode &b){
	return a.w+TD[a.v]>b.w+TD[b.v];
  }
};
int aStar(int S,int T,int K){
  if(TD[S]==INF) return -1;
  int cnt=0;
  if(S==T) --cnt;
  priority_queue<HeapNode,vector<HeapNode>,cmpAstar> q;
  q.push(HeapNode(S,0));
  while(!q.empty()){
	int u=q.top().v,d=q.top().w;
	q.pop();
	if(u==T&& ++cnt==K) return d;
	for(size_t i=0;i<G[u].size();i++){
	  const Edge& e=G[u][i];
	  q.push(Edge(e.v,d+e.w));
	}
  }
  return -1;
}
int main(){
  std::ios::sync_with_stdio(false);
  int M,S,T,K;
  cin>>N>>M;
  for(int i=0,a,b,w;i<M;i++){
	cin>>a>>b>>w;
	G[a].push_back(Edge(b,w)),Rev[b].push_back(Edge(a,w));
  }
  cin>>S>>T>>K;
  dijkstra(T);
  cout<<aStar(S,T,K)<<endl;
  return 0;
}
