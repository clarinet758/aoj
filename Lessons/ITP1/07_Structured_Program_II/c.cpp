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
    int r,c;
    sc2(r,c);
    int sp[r+1][c+1];
    rep(i,r+1) rep(j,c+1) sp[i][j]=0;
    rep(i,r) rep(j,c) sc1(sp[i][j]);
    rep(i,r+1) {
        rep(j,c) {
            printf("%d ",sp[i][j]);
            sp[i][c]+=sp[i][j];
            if (i<r) sp[r][j]+=sp[i][j];
        }
        printf("%d\n",sp[i][c]);
    }
    return 0;
}
