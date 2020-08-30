#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define lc1(a)  scanf("%lld",&a)

long long a[100][100],b[100][100],w[100][100];

int main(){
    int n,m,l,ans;
    sc3(n,m,l);
    rep(i,n) rep(j,m) lc1(a[i][j]);
    rep(i,m) rep(j,l) lc1(b[i][j]);
    rep(i,n) rep(j,l) {
        rep(k,m) {
            w[i][j]+=a[i][k]*b[k][j];
        }
    }
    rep(i,n) rep(j,l) {
        printf("%lld%s",w[i][j],(j<l-1)?" ":"\n");
    }
    return 0;
}
