#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

bool used[15];
int w[15];

void op(){
    bool f=1;
    rep(i,13) {
        if (used[i]) {
            if (f) { printf("%d",w[i]); f=0; }
            else printf(" %d",w[i]); 
        }
    }
    puts("");
    return;
}

void dfs(int a,int b) {
    if (a==0) {op(); return;}
    else if(a<0 or b>12)  return;

    a-=w[b];
    used[b]=1;
    dfs(a,b+1);

    a+=w[b];
    used[b]=0;
    dfs(a,b+1);
    return;
}

void bt(int a) {
    int cnt;
    for(int i=1;i < 4096;i++) {
        int p=i;
        cnt=0;
        rep(i,12) used[i]=0;
        for (int j=0;j<10;j++) {
            if (p>>j&1) {
                used[j]=1;
                cnt+=w[j];
            }
        }
        if (a==cnt) {op(); return;}
    }
}


int main(){
    w[0]=1;
    for(int i=1;i<13;i++) w[i]=w[i-1]*2;
    int n;
    while (cin>>n) {
        //dfs(n,0);
        bt(n);
    }
    return 0;
}
