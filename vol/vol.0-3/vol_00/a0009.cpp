#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
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
    bool b[1000000]={0};
    for (int i=0;i<1000000;i++) {
        b[i]=pr(i);
    }
    int n;
    b[0]=0,b[1]=0;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        for (int i=1;i<=n;i++){
            if (b[i]==true) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
