#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,buf;
  set<string> dict;
  while(cin>>s){
    for(size_t i=0;i<s.length();i++)
      s[i]=isalpha(s[i]) ? tolower(s[i]) : ' ';
    stringstream ss(s);
    while(ss>>buf) dict.insert(buf);
  }
  for(set<string>::iterator sit=dict.begin();sit!=dict.end();sit++)
    cout<<*sit<<endl;
  return 0;
}
