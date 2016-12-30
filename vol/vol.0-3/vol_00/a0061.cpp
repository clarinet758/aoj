#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    int mod=1000000007;
    int p,s,q;
    bool x[31]={0};
    map<int,int> m;
    for (;;){
        scanf("%d,%d",&p,&s);
        if (p==0 && s==0) break;
        m[p]=s;
        x[s]=1;
    }
    while (scanf("%d",&q)!=EOF) {
        int cnt=0;
        for (int i=31;i>-1;--i) {
            if (x[i]==1) cnt++;
            if (i==m[q]) {
                printf("%d\n",cnt);
                break;
            }
        }
    }
    return 0;
}
