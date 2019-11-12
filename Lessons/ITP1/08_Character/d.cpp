#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define per(i,n)  for(int i=n-1;i>=0;--i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define sl1(a)  scanf("%lld",&a)
#define sl2(a,b)  scanf("%lld %lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld %lld %lld",&a,&b,&c)
#define PI 3.1415926535897932

int main(){
    char s[101],p[101];
    int sx,px;
    scanf("%s",s);
    scanf("%s",p);
    sx=strlen(s);
    px=strlen(p);
    rep(i,sx) rep(j,sx) {
        int k=(i+j)%sx;
        if (s[k]==p[0]) {
            bool f=1;
            rep(x,px) if (p[x]!=s[(k+x)%sx]) f=0;
            if (f) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
