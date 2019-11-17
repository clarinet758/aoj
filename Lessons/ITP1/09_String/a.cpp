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
    int ans=0;
    char w[11];
    char t[1001];
    scanf("%s",w);
    int ww=strlen(w);
    for (;;) {
        scanf("%s",t);
        if (!strcmp(t,"END_OF_TEXT")) break;
        int tt=strlen(t);
        for (int j=0;j<tt;j++) if (isupper(t[j])) t[j]=t[j]+32;
        if (!strcmp(t,w)) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
