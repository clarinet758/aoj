#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

bool pr(int n) {
    int i=2;
    while (i*i<=n) {
        if (n%i==0) return false;
        i++;
    }
    return true;
}


int main(){
    int mod=1000000007;
    bool b[50010]={0};
    int n,ans;
    for (int i=2;i<50010;++i) {
        b[i]=pr(i);
    }
    for (;;) {
        scanf("%d",&n);
        if (n==0) break;
        ans=0;
        for (int i=2;i<(n+1)/2+1;++i) {
            if ((n-i)<i) break;
            if (b[i] && b[n-i]) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
