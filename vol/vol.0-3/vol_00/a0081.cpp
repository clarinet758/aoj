#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


double sol (double a, double b, double c,double xq, double yq) {
    return printf("%lf %lf\n",xq-2*a*(a*xq+b*yq+c)/(a*a+b*b),yq-2*b*(a*xq+b*yq+c)/(a*a+b*b));
}

int main(){
    double x1,y1,x2,y2,qx,qy;
    while (scanf("%lf,%lf,%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2,&qx,&qy)!=EOF) {
        sol(y2-y1,-1*(x2-x1),x2*y1-x1*y2,qx,qy);
    }
    return 0;
}
