#include<bits/stdc++.h>
using namespace std;
string rev="A   3  HIL JM O   2TUVWXY51SE Z  8",
msg[]={
    "not a palindrome",
    "a regular palindrome",
    "a mirrored string",
    "a mirrored palindrome"
};
char  r(char c){
    if(isalpha(c)) return rev[c-'A'];
    return rev[c-'0'+25];
}
int main(){
    char s[32];
    while(scanf("%s",s)==1){
        int len=strlen(s),p=1,m=1;
        for(int i=0;i<(len+1)/2;i++){
            if(s[i]!=s[len-1-i]) p=0;
            if(r(s[i])!=s[len-1-i]) m=0;
        }
        printf("%s--is %s.\n\n",s,msg[m*2+p]);
        
    }
    return 0;
}