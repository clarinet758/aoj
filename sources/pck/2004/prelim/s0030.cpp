#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc2(a,b)  scanf("%d %d",&a,&b)

int cnt;

void dfs(int a,int b,int c) {
    if(c>9) {
        if(a==0 && b==0) cnt++;
        return;
    }
    dfs(a-1,b-c,c+1);
    dfs(a,b,c+1);
    return;
}

int main(){
    int a,b;
    for(;;) {
        cnt=0;
        sc2(a,b);
        if (a==0) break;
        dfs(a,b,0);
        printf("%d\n",cnt);
    }
    return 0;
}
