#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int n,s[100005];

bool chk(int k){
    int l=0,r=n,x;
    while (l<r) {
        x=(l+r)/2;
        if (k==s[x]) return 1;
        if (k>s[x]) l=x+1;
        else r=x;
    }
    return 0;
}

int main(){
    int t,q,ans=0;
    sc1(n);
    rep(i,n) sc1(s[i]);
    sc1(q);
    rep(i,q) {
        sc1(t);
        ans+=chk(t);
    }
    printf("%d\n",ans);
    return 0;
}
