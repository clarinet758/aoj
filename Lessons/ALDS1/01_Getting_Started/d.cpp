#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,r,x=1000000000,ans=-2000000001;
    sc1(n);
    rep(i,n) {
        sc1(r);
        if (i>0) ans=max(ans,r-x);
        x=min(x,r);
    }
    printf("%d\n",ans);
    return 0;
}
