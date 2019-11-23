#include<bits/stdc++.h>
using namespace std;
#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
int main(){
    vector <int> d(6);
    vector <int> a(6);
    for(auto&e:d) sc1(e);
    for(auto&e:a) sc1(e);
    char s[8]={'N','W','E','E','E','N','N','N'};
    rep(i,8) {
        int tmp,tmp2;
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
        rep(j,4) {
            tmp2=d[1];
            d[1]=d[2];
            d[2]=d[4];
            d[4]=d[3];
            d[3]=tmp2;
            int f=1;
            rep(k,6) if (a[k]!=d[k]) f=0;
            if (f) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
