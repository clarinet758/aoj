#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int n,a[50];

int sol(int i,int m) {
    if(m==0) return 1;
    if(i>=n) return 0;
    int res=sol(i+1,m) || sol(i+1,m-a[i]);
    return res;
}

int main(){
    int mod=1000000007;
    int q,m;
    sc1(n);
    rep(i,n) sc1(a[i]);
    sc1(q);
    rep(i,q) {
        sc1(m);
        if(sol(0,m)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
