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
    for (;;) {
        int a,b,c;
        sc3(a,b,c);
        if (a==-1 && b==-1 && c==-1) break;
        if (a==-1 || b==-1) printf("F");
        else if (a+b>=80) printf("A");
        else if (a+b>=65) printf("B");
        else if (a+b>=50) printf("C");
        else if (a+b>=30 && c>=50) printf("C");
        else if (a+b>=30) printf("D");
        else printf("F");
        puts("");
    }
    return 0;
}
