#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)

int main(){
    char s[1005];
    for(;;) {
        scanf("%s",s);
        int cnt=0;
        rep(i,strlen(s))  cnt+=s[i]-'0';
        if(cnt==0) break;
        printf("%d\n",cnt);
    }
    return 0;
}
