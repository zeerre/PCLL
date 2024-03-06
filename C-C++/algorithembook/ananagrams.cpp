#include<bits/stdc++.h>
using namespace std;
char ch_tolower(char c){return tolower(c);}
string repr(const string& s){
  string ans =s;
  transform(ans.begin(),ans.end(),ans.begin(),ch_tolower);
  sort(ans.begin(),ans.end());
  return ans;
}
int main(){
  map<string,int> cnt;
  vector<string> words,ans;
  string s;
  while(cin>>s && s.front()!='#') words.push_back(s),cnt[repr(s)]++;
  for(size_t i=0;i<words.size();i++)
    if(cnt[repr(words[i])]==1) ans.push_back(words[i]);
  sort(ans.begin(),ans.end());
  for(size_t i=0;i<ans.size();i++) cout<<ans[i]<<endl;
  return 0;
}
