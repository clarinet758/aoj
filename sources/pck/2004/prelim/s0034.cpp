#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
//WA 変数宣言　どこでかによって挙動に注意
int a,b,c=0,x;
int l[12],s[11];
double w,p,q;

int main(){
    while(scanf("%d,",&x)!=EOF) {
        l[c]=x;
        s[c+1]=s[c]+x;
        c++;
        if (c < 12)  continue;
        c=0;
        p=0.0,q=50000.0;
        for(;;) {
            w=(p+q)/2.0;
            double chk=(w*l[10]+w*l[11])-(1.0*s[10]);
            if (chk>0 && chk<0.0000001) break;
            else if (chk>0.0000001) q=w;
            else p=w;
        }
        double g=w*l[10];
        rep(i,11) {
            if (1.0*s[i]>g) {
                printf("%d\n",i);
                break;
            }
        }
        rep(i,11) s[i]=0;
    }
    return 0;
}
