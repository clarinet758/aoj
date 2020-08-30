#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int mod=1000000007;
    int n,m,ans;
    char p[105],s[105];
    scanf("%s",s);
    scanf("%s",p);
    int l=strlen(s);
    bool f=0;
    rep(i,l*2) {
        int k=1;
        rep(j,strlen(p)) if (s[(i+j)%l]!=p[j]) k=0;
        f|=k;
    }
    printf("%s\n",f?"Yes":"No");
    return 0;
}
