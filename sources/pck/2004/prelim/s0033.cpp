#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int mod=1000000007;
    int n, p[10];
    sc1(n);
    rep(i,n) {
        int a=0,b=0;
        rep(j,10) sc1(p[j]);
        bool f=1;
        rep(j,10) {
            if(a>=b && a<p[j]) a=p[j];
            else if(a<=b && b<p[j]) b=p[j];
            else if(a>=b && b<p[j]) b=p[j];
            else if(a<=b && a<p[j]) a=p[j];
            else f=0;
        }
        printf("%s\n",f?"YES":"NO");
    }
    return 0;
}
