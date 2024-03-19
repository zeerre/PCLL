#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false),cin.tie(0);
  string s;
  int cnt=0;
  cin>>s;
  sort(s.begin(),s.end());
  cout<<s<<endl;
  while(next_permutation(s.begin(),s.end())){
	cout<<s<<endl;
	cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}
