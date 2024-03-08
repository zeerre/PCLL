#include<bits/stdc++.h>
using namespace std;
const int NN=30;
int N;
vector<int> pile[NN];
int find_block(int a,int& h){
  int p=-1;
  for(p=0;p<N;p++)
    for(h=0;h<pile[p].size();h++)
      if(pile[p][h]==a) return p;
  return -1;
}
void clear_above(int p,int h){
  vector<int>& s=pile[p];
  for(size_t i=h+1;i<s.size();i++)
    pile[s[i]].push_back(s[i]);
  s.resize(h+1);
}
void pile_onto(int p,int h,int p2){
  vector<int>& s=pile[p];
  for(size_t i=h;i<s.size();i++)
    pile[p2].push_back(s[i]);
  s.resize(h);
}
void print(){
  for(int i=0;i<N;i++){
    printf("%d:",i);
    for(auto x:pile[i]) printf(" %d",x);
    printf("\n");
  }
}
int main(){
  int a,b;
  cin>>N;
  string s1,s2;
  for(int i=0;i<N;i++) pile[i].push_back(i);
  while(cin>>s1>>a>>s2>>b){
    int pa,pb,ha,hb;
    pa=find_block(a,ha),pb=find_block(b,hb);
    if(pa==pb) continue;
    if(s2=="onto") clear_above(pb,hb);
    if(s1=="move") clear_above(pa,ha);
    pile_onto(pa,ha,pb);
  }
  print();
  return 0;
}
  
