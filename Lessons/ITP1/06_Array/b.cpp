#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n;
    sc1(n);
    bool w[4][13];
    rep (i,4) rep(j,13) w[i][j]=1;
    rep(i,n) {
        char c[5]; int x;
        scanf("%s %d",c,&x);
        x--;
    //    printf("%c\n",c[0]);
        if (c[0]=='S') w[0][x]=0;
        if (c[0]=='H') w[1][x]=0;
        if (c[0]=='C') w[2][x]=0;
        if (c[0]=='D') w[3][x]=0;
    }
    rep(i,13)  if (w[0][i]) printf("%c %d\n",'S',i+1);
    rep(i,13)  if (w[1][i]) printf("%c %d\n",'H',i+1);
    rep(i,13)  if (w[2][i]) printf("%c %d\n",'C',i+1);
    rep(i,13)  if (w[3][i]) printf("%c %d\n",'D',i+1);
    return 0;
}

