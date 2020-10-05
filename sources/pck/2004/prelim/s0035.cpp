#include<bits/stdc++.h>
using namespace std;

/**
 d     c 

 a     b 
 **/

int main(){
    int mod=1000000007;
    int n,m,ans;
    double xa,ya,xb,yb,xc,yc,xd,yd;
    while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd)!=EOF) {
        //double s = (xb-xa)*(yc-ya)-(xc-xa)*(yb-ya);
        //double t = (xb-xa)*(yd-ya)-(xd-xa)*(yb-ya);
        bool f=1;
        double s,t;
        s = (xc-xa)*(yb-ya)-(xb-xa)*(yc-ya);
        t = (xc-xa)*(yd-ya)-(xd-xa)*(yc-ya);
        if (s*t>0.0) f=0;

        s = (xd-xb)*(ya-yb)-(xa-xb)*(yd-yb);
        t = (xd-xb)*(yc-yb)-(xc-xb)*(yd-yb);
        if (s*t>0.0) f=0;
        printf("%s\n",f?"YES":"NO");
    };
    return 0;
}
