#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,m,v,ans;
    sc1(n);
    int a[n];
    rep(i,n) sc1(a[i]);
    rep(i,n) {
        v=a[i];
        for (int k=i;k>0;k--) {
            //printf("%d\n",k);
            if (v<a[k-1]) {
                a[k]=a[k-1];
                a[k-1]=v;
            } else {
                a[k]=v;
                break;
            }
        }
        rep(j,n) {
            if (j<n-1) printf("%d ",a[j]);
            else printf("%d\n",a[j]);
        }
    }
    return 0;
}
