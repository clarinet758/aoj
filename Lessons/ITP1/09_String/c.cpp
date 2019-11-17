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
    int n,x=0,y=0;
    sc1(n);
    rep(i,n) {
        char a[101],b[101];
        scanf("%s %s",a,b);
        if (strcmp(a,b)>0)  x+=3;
        else if (strcmp(a,b)<0) y+=3;
        else { x++; y++; }
    }
    printf("%d %d\n",x,y);
    return 0;
}
