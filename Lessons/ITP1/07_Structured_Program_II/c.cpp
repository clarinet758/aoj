#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)

int w[105][105];
int main(){
    int r,c;
    sc2(r,c);
    rep(i,r) {
        rep(j,c){
            sc1(w[i][j]);
            w[i][c]+=w[i][j];
            w[r][j]+=w[i][j];
            w[r][c]+=w[i][j];
        }
    }
    rep(i,r+1) {
        rep(j,c+1){
            printf("%d%s",w[i][j],(j<c?" ":"\n"));
        }
    }
    return 0;
}
