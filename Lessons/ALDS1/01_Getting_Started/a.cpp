#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n;
    sc1(n);
    int a[n];
    rep(i,n) sc1(a[i]);
    rep(i,n) {
        int t=i;
        while (t>0) {
            if (a[t]<a[t-1]) {
                int tmp;
                tmp=a[t];
                a[t]=a[t-1];
                a[t-1]=tmp;
            }
            t--;
        }
        rep(j,n) printf("%d%c",a[j],j<n-1?' ':'\n'); 
    }
    return 0;
}
