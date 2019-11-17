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
    int n,m,ans;
    for(;;) {
        int n,t;
        double v,p=0;
        sc1(n);
        if (n==0) break;
        vector<int> a(n);
        for(auto&e:a) sc1(e);
        t=accumulate(a.begin(),a.end(),0);
        v=1.0*t/n;
        rep(i,n) p+=pow((a[i]-v),2);
        printf("%.15lf\n",sqrt(p/n));
        
    }
    return 0;
}
