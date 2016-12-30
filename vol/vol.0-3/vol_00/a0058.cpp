#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

bool sol(double xa,double ya,double xb,double yb,double xc,double yc,double xd,double yd) {
    if (abs((yb-ya)*(yd-yc)+(xb-xa)*(xd-xc))<1e-10) return true;
    return false;
}

int main(){
    int mod=1000000007;
    int n;
    double a,b,c,d,e,f,g,h;
    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h)!=EOF) {
        if (sol(a,b,c,d,e,f,g,h)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
