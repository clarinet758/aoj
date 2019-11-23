#include<bits/stdc++.h>
using namespace std;
#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
int main(){
    int n;
    sc1(n);
    vector<vector<int>> d(n,vector<int>(6));
    rep(i,n) rep(j,6) sc1(d[i][j]);
    char s[8]={'N','W','E','E','E','N','N','N'};
    rep(a,n) rep(b,a) rep(i,8) {
        int tmp,tmp2;
        if (s[i]=='N') {
            tmp=d[b][0];
            d[b][0]=d[b][1];
            d[b][1]=d[b][5];
            d[b][5]=d[b][4];
            d[b][4]=tmp;
        } else if (s[i]=='W') {
            tmp=d[b][0];
            d[b][0]=d[b][2];
            d[b][2]=d[b][5];
            d[b][5]=d[b][3];
            d[b][3]=tmp;
        } else if (s[i]=='E') {
            tmp=d[b][0];
            d[b][0]=d[b][3];
            d[b][3]=d[b][5];
            d[b][5]=d[b][2];
            d[b][2]=tmp;
        } else {
            tmp=d[b][0];
            d[b][0]=d[b][4];
            d[b][4]=d[b][5];
            d[b][5]=d[b][1];
            d[b][1]=tmp;
        }
        rep(j,4) {
            tmp2=d[b][1];
            d[b][1]=d[b][2];
            d[b][2]=d[b][4];
            d[b][4]=d[b][3];
            d[b][3]=tmp2;
            int f=1;
            rep(k,6) if (d[a][k]!=d[b][k]) f=0;
            if (f) {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}
