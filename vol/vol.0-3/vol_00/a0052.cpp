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

int main(){
    //int mod=1000000007;
    int mod=1003199;
    int n;
    for (;;) {
        scanf("%d",&n);
        if (n==0) break;
        int ans=0;
        while (n) {
            n/=5;
            ans+=n;
        }
        printf("%d\n",ans);
    }
    return 0;
}
