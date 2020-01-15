#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int isp(int x) {
    if (x==2) {
        return 1;
    } else if (x%2==0) {
        return 0;
    }
    int i=3;
    while (i*i<=x) {
        if (x%i==0) return 0;
        i+=2;
    }
    return 1;
}

int main(){
    int mod=1000000007;
    int n,ans=0;
    sc1(n);
    rep(i,n) {
        int x;
        sc1(x);
        ans+=isp(x);
    }
    printf("%d\n",ans);
    return 0;
}
