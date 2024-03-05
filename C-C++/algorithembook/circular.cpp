#include <bits/stdc++.h>
using namespace std;
int less_than(const string& s,int p,int q){
    int n=s.length();
    for(int i=0;i<n;i++){
        char cp=s[(p+i)%n],cq=s[(q+i)%n];
        if(cp!=cq) return cp<cq;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    int T;
    string s;
    cin>>T;
    while(T--){
        cin>>s;
        int ans=0,n=s.length();
        for(int i=1;i<n;i++)
            if(less_than(s,i,ans)) ans=i;
        for(int i=0;i<n;i++) cout<<(s[ans+i]%n);
        cout<<endl;
    }
    return 0;
}