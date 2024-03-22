#include<bits/stdc++.h>
using namespace std;

int used[17],P[]={2,3,5,7,11,13,17,19,23,29,31};
void dfs(const size_t N,vector<int>& nums){
  if(nums.size()==N){
	for(size_t i=0;i<N;i++)
	  printf("%d%s",nums[i],i==N-1?"\n" :" ");
	return;
  }
  for(size_t i=1;i<=N;i++)
	if(!used[i]&&binary_search(P,P+11,i+nums.back())){
	  if(nums.size()==N-1&&!binary_search(P,P+11,i+nums.front())) continue;
	  used[i]=1,nums.push_back(i);
	  dfs(N,nums);
	  used[i]=0,nums.pop_back();
	}
}
int main(){
  vector<int> nums({1});
  for(int t=1,N;scanf("%d",&N) ==1;t++){
	if(t>1) puts("");
	printf("Case %d:\n",t);
	fill_n(used,17,0),used[1]=1;
	dfs(N,nums);
  }
  return 0;
}
