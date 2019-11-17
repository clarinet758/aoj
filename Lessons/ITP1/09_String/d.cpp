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
    int mod=1000000007;
    int n,m,ans;
    char w[1001];
    scanf("%s",w);
    sc1(n);
    rep(i,n) {
        int a,b;
        char s[1001],t[1001];
        scanf("%s",s);
        if (!strcmp("replace",s)) {
            sc2(a,b);
            scanf("%s",t);
            for (int j=a;j<=b;j++) w[j]=t[j-a];
        } else if (!strcmp("reverse",s)) {
            sc2(a,b);
            strcpy(t,w);
            int c=b;
            for (int j=a;j<=b;j++) {
                w[j]=t[c];
                c--;
            }
        } else {
            sc2(a,b);
            for (int j=a;j<=b;j++) printf("%c",w[j]);
            puts("");
//            printf("%s\n",w);
        }
    }            
    return 0;
}
