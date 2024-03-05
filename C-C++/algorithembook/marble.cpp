#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10000+4;
int main(){
    int a[maxn];
    for(int n,q,x,kase=1;scanf("%d%d",&n,&q)==2&&n;kase++){
        printf("CASE# %d:\n",kase);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        while(q--){
            scanf("%d",&x);
            int p=lower_bound(a,a+n,x)- a;
            if(p<n&&a[p]==x)
                printf("%d found at %d\n",x,p+1);
            else
                printf("%d not found\n",x);
        }
    }
    return 0;
}