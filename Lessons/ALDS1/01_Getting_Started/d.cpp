#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int mod=1000000007;
    int n,p,ans=-mod;
    sc1(n);
    sc1(p);
    rep(i,n-1) {
        int r;
        sc1(r);
        ans=max(ans,r-p);
        p=min(p,r);
    }
    printf("%d\n",ans);
    return 0;
}
