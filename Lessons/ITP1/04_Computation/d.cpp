#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n;
    long long ans=0ll;
    sc1(n);
    vector <long long> a(n);
    rep(i,n) scanf("%lld",&a[i]);
    sort(a.begin(),a.end());
    rep(i,n) ans+=1ll*a[i];
    printf("%lld %lld %lld\n",a[0],a[n-1], ans);
    return 0;
}
