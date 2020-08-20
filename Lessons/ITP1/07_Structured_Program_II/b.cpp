#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int n,x,ans;
    for(;;) {
        sc2(n,x);
        ans=0;
        if (n==0) break;
        for (int i=1;i<n-1;i++) for (int j=i+1;j<n;j++) {
            int p=x-i-j;
            if (p>j && p<=n) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
