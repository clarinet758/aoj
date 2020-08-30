#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)

int cnt[26];
int main(){
    //scanf("%d %d",&n,&m);
    char s;
    while(scanf("%c",&s)!=EOF) {
        if(isupper(s)) cnt[s-'A']++;
        else if(islower(s)) cnt[s-'a']++;
    }
    rep(i,26) printf("%c : %d\n",i+'a',cnt[i]);
    return 0;
}
