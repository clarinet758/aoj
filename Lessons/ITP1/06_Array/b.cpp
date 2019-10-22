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

//typedef long long ll;


int lcm(int a,int b) { return a*b/__gcd(a,b); }
//ll lcm(ll a,ll b) { return a*b/__gcd(a,b); }

/**
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/


int main(){
    int n;
    bool card[4][13];
    rep (i,4) rep (j,13) card[i][j]=0;
    sc1(n);
    
    rep(i,n) {
        printf("%d\n",i);
        char c[10];
        int x;
        scanf("%s %d",c,&x);
        if (*c=='S') card[0][x-1]=1;
        if (*c=='H') card[1][x-1]=1;
        if (*c=='C') card[2][x-1]=1;
        if (*c=='D') card[3][x-1]=1;
        //if (c[0]=='S') card[0][x-1]=1;
        //if (c[0]=='H') card[1][x-1]=1;
        //if (c[0]=='C') card[2][x-1]=1;
        //if (c[0]=='D') card[3][x-1]=1;
    }
    rep (i,4) rep(j,13) {
        if (card[i][j]==0) {
            if (i==0) printf("S %d\n",j+1);
            if (i==1) printf("H %d\n",j+1);
            if (i==2) printf("C %d\n",j+1);
            if (i==3) printf("D %d\n",j+1);
            
        }
    }
    return 0;
}
