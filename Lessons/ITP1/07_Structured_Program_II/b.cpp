#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int n,x;
    for (;;) {
        sc2(n,x);
        int cnt=0;
        if(n==0) break;
        for (int i=1;i<=n-2;i++) for (int j=i+1;j<=n-1;j++) {
            int k=x-i-j;
            if (k>j && k<=n)   cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
