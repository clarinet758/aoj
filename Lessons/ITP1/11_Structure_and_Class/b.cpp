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
    vector <int> d(6);
    for(auto&e:d) sc1(e);
    sc1(n);
    rep(i,n) {
        int a,b;
        sc2(a,b);
        //if ((a==1 && b==2)||(a==2 && b==6)||(a==6 && b==5) || (a==5 && b==1)) {
        if ((a==d[0] && b==d[1])||(a==d[1] && b==d[5])||(a==d[5] && b==d[4]) || (a==d[4] && b==d[0])) {
            printf("%d\n",d[2]);
        } else if ((a==d[0] && b==d[4])||(a==d[4] && b==d[5])||(a==d[5] && b==d[1]) || (a==d[1] && b==d[0])) {
            printf("%d\n",d[3]);
        } else if ((a==d[0] && b==d[3])||(a==d[3] && b==d[5])||(a==d[5] && b==d[2]) || (a==d[2] && b==d[0])) {
            printf("%d\n",d[1]);
        } else if ((a==d[0] && b==d[2])||(a==d[2] && b==d[5])||(a==d[5] && b==d[3]) || (a==d[3] && b==d[0])) {
            printf("%d\n",d[4]);
        } else if ((a==d[2] && b==d[1])||(a==d[1] && b==d[3])||(a==d[3] && b==d[4]) || (a==d[4] && b==d[2])) {
            printf("%d\n",d[5]);
        } else {
            printf("%d\n",d[0]);
        }
    }
    return 0;
}
