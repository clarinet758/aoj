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
    int c1,c2,c3;
    while (scanf("%d %d %d",&c1,&c2,&c3)!=EOF) {
        bool x[10]={0};
        x[c1-1]=1;
        x[c2-1]=1;
        x[c3-1]=1;
        int cnt=0;
        for (int i=0;i<10;++i) {
            if (x[i]==0 && c1+c2+i<20) cnt++;
        }
        printf((cnt>3)?"YES\n":"NO\n");
    }
    return 0;
}
