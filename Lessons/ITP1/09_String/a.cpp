#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)

int main(){
    int ans=0;
    char w[15],s[15];
    scanf("%s",w);
    for(;;) {
        scanf("%s",s);
        if(strcmp(s,"END_OF_TEXT")==0) break;
        rep(i,strlen(s)) if(isupper(s[i])) s[i]=s[i]-'A'+'a';
        if(strcmp(s,w)==0) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
