#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define PI 3.1415926535897932

int main(){
    int n,m,ans;
    sc2(n,m);
    int a[n][m],b[m];
    rep(i,n) rep(j,m) {
        sc1(a[i][j]);
    }
    rep(i,m) sc1(b[i]);
    rep(i,n) {
        ans=0;
        rep(j,m) {
            ans+=a[i][j]*b[j];
        }
        printf("%d\n",ans);
    }
    return 0;
}
