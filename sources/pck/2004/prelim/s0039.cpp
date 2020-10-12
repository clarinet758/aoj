#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)

int main(){
    char s[105];
    int cnt[105];
    int f,memo,ans;
    map <int, int> d;
    d['M'-'A'] = 1000; d['D'-'A'] = 500; d['C'-'A'] = 100; d['L'-'A'] = 50; d['X'-'A'] = 10; d['V'-'A'] = 5; d['I'-'A'] = 1;
    while(scanf("%s",s)!=EOF) {
        rep(i,105) cnt[i]=0;
        f=0,memo=0,ans=0;
        for(long i=0;i<strlen(s);i++) {
            if(memo==0) {memo=d[s[i]-'A']; cnt[f]+=memo;}
            else if(memo!=d[s[i]-'A']) {memo=d[s[i]-'A']; f++; cnt[f]+=memo;}
            else {cnt[f]+=memo;}
        }
        f=0;
        for (;;) {
            if (f>100) break;
            else if (cnt[f]<cnt[f+1]) { ans+=(cnt[f+1]-cnt[f]); f+=2; }
            else { ans+=cnt[f]; f++;}
        }
        printf("%d\n",ans);
    }
    return 0;
}
