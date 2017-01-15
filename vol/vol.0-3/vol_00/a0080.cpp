#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    double tmp[20][2];
    int cnt=0;
    int n;
    for (;;) {
        scanf("%d",&n);
        if (n==-1) break;
        double ans=1.0*n/2.0;
        while (abs(ans*ans*ans-n)>=0.00001*n) ans-=(ans*ans*ans-n)/(3*ans*ans);
        printf("%.8lf\n",ans);
    }
    return 0;
}
