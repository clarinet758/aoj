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
    for (;;) {
        int n,x,ans=0;
        sc2(n,x);
        if (n==0 && x==0) break;
        for (int i=1;i<n-1;i++) for (int j=i+1;j<n;j++) for (int k=j+1;k<=n;k++) {
            if (i+j+k==x) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
