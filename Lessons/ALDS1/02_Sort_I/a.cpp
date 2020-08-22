#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,m,ans=0;
    sc1(n);
    int a[n];
    rep(i,n) sc1(a[i]);
    rep(i,n) {
        for (int j=n-1;j>0;j--) {
            if (a[j]<a[j-1]) {
                swap(a[j],a[j-1]);
                ans++;
            }
        }
    }
    rep(i,n) {
        if (i<n-1) printf("%d ",a[i]);
        else printf("%d\n",a[i]);
    }
    printf("%d\n",ans);
    return 0;
}
