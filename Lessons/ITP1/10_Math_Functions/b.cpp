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
    int a,b,C,m,ans;
    sc3(a,b,C);
    double s,l,h,r,c;
    r=C*PI/180;
    c=sqrt(a*a+b*b-2*a*b*cos(r));
    h=b*sin(r);
    printf("%.15lf\n%.15lf\n%.15lf\n",h*a/2,a+b+c,h);
    return 0;
}
