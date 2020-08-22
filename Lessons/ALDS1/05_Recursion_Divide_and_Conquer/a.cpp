#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int a,n,m;
    sc1(n);
    int q[n];
    bool ans[5000000];
    rep(i,5000000) ans[i]=0;
    rep(i,n) sc1(q[i]);
    rep(i,pow(2,n)) {
        bool chk[25];
        rep(j,25) chk[j]=0;
        int x=i;
        rep(j,n) {
            if (x&1) chk[j]=1;
            x=x>>1;
        }
        x=0;
        rep(j,n) if (chk[j]) x+=q[j];
        ans[x]=1;
    }
    sc1(a);
    rep(i,a) {
        sc1(m);
        printf("%s\n",ans[m]?"yes":"no");
    }
    return 0;
}
