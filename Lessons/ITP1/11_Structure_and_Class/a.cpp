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
    int n,m,ans;
    char s[100];
    vector <int> d(6);
    for(auto&e:d) sc1(e);
    scanf("%s",s);
    n=strlen(s);
    rep(i,n) {
        int tmp;
        if (s[i]=='N') {
            tmp=d[0];
            d[0]=d[1];
            d[1]=d[5];
            d[5]=d[4];
            d[4]=tmp;
        } else if (s[i]=='W') {
            tmp=d[0];
            d[0]=d[2];
            d[2]=d[5];
            d[5]=d[3];
            d[3]=tmp;
        } else if (s[i]=='E') {
            tmp=d[0];
            d[0]=d[3];
            d[3]=d[5];
            d[5]=d[2];
            d[2]=tmp;
        } else {
            tmp=d[0];
            d[0]=d[4];
            d[4]=d[5];
            d[5]=d[1];
            d[1]=tmp;
        }
    }
    printf("%d\n",d[0]);
    return 0;
}
