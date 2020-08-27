#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,b,f,r,v;
    sc1(n);
    int w[4][3][10];
    rep(i,4) rep(j,3) rep(k,10) w[i][j][k]=0;
    rep(i,n) {
        scanf("%d %d %d %d",&b,&f,&r,&v);
        w[b-1][f-1][r-1]+=v;
    }
    rep(i,4) {
        rep(j,3) {
            rep(k,10) {
                printf(" %d%s",w[i][j][k],(k<9)?"":"\n");
            }
        }
        if (i<3) printf("####################\n");
    }
    return 0;
}
