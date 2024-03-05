#include<bits/stdc++.h>
using namespace std;
#define _for(i,a,b) for(int i=(a);i<(b);++i)   //宏定义for结构
typedef long long LL;
const int MAXN=100;
int main(){
    int n,a,cnt[MAXN+4];
    while(scanf("%d",&n)==1&&n){// 输入0结束此环节
        fill_n(cnt,MAXN+4,0);   // 定义区间填充数据
        _for(i,0,n) scanf("%d",&a),++cnt[a];
        _for(i,0,MAXN) _for(j,0,cnt[i])
        printf("%d%s",i,(i==MAXN-1&&j==cnt[i]-1)?"":" ");//三元运算：
        puts("");
    }
    return 0;
}