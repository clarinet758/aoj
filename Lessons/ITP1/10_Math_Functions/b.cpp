#include<bits/stdc++.h>
using namespace std;

#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define PI 3.1415926535897932

int main(){
    int a,b,C;
    sc3(a,b,C);
    double r,c,h;
    r=C*PI/180;
    c=pow((a*a+b*b-2*a*b*(cos(r))),0.5);
    h=b*sin(r);
    printf("%.10lf\n",h*a/2);
    printf("%.10lf\n",a+b+c);
    printf("%.10lf\n",h);
    return 0;
}
