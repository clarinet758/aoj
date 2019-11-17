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
    for(;;) { 
        char a[201],b[201];
        int m,l;
        scanf("%s",a);
        if (a[0]=='-') break;
        sc1(m);
        strcpy(b,a);
        l=strlen(a);
        
        rep(i,m) {
            int h;
            sc1(h);
            for(int j=h;j<l;j++) {
                b[j-h]=a[j];
            }
            for(int j=l-h;j<l;j++) {
                b[j]=a[j+h-l];
            }
            strcpy(a,b);
        }
        printf("%s\n",b);
    }
    return 0;
}
