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
    int mod=1000000007;
    int m=70099;
    int a,b,n;
    while (scanf("%d %d %d",&a,&b,&n)!=EOF) {
        int ans=0;
        while (n>0) {
            a=a%b*10;
            ans+=a/b;
            n-=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
