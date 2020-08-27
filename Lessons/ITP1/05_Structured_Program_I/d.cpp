#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

bool chk(int x) {
    for(;;) {
        if (x%10==3) return 1;
        x/=10;
        if (x==0) return 0;
    }
    return 0;
}

int main(){
    int n;
    sc1(n);
    for(int i=3;i<=n;i++) {
        bool f=(i%3==0);
        f|=chk(i);
        if(f) printf(" %d",i);
    }
    puts("");
    return 0;
}
