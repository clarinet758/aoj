#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define per(i,n)  for(int i=n-1;i>=0;--i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define sl1(a)  scanf("%lld",&a)
#define sl2(a,b)  scanf("%lld %lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld %lld %lld",&a,&b,&c)
#define PI 3.1415926535897932

int main(){
    int mod=1000000007;
    int n,m;
    sc2(n,m);
    int a[n][m],b[m];
    rep(i,n) rep(j,m) sc1(a[i][j]);
    rep(i,m) sc1(b[i]);
    rep (i,n) {
        int ans=0;
        rep (j,m)  ans+=a[i][j]*b[j];
        printf("%d\n",ans);
    }
    return 0;
}
