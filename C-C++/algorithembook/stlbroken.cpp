#include<bits/stdc++.h>
using namespace std;
typedef list<char> CL;
int main(){
  for(string line;cin>>line;cout<<endl){
    CL l;
    CL::iterator pos=l.begin();
    for(size_t i=0;i<line.size();i++){
      char c=line[i];
      if(c=='[')
	pos=l.begin();
      else if(c==']')
	pos=l.end();
      else
	l.insert(pos,c);
    }
    for(pos=l.begin();pos!=l.end();pos++) cout<< *pos;
  }
  return 0;
}
