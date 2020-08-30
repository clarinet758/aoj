#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n;
    double t=0.0;
    sc1(n);
    vector <int> x(n);
    vector <int> y(n);
    for(auto&e:x) sc1(e);
    for(auto&e:y) sc1(e);

    rep(i,n) t+=abs(x[i]-y[i])*1.0;
    printf("%.10lf\n",t);
    t*=0;

    rep(i,n) t+=pow((x[i]-y[i]),2);
    printf("%.10lf\n",pow(t,0.5));
    t*=0;

    rep(i,n) t+=pow(abs(x[i]-y[i]),3);
    printf("%.10lf\n",pow(t,1.0/3.0));
    t*=0;

    rep(i,n) t=max(t,abs(x[i]-y[i])*1.0);
    printf("%.10lf\n",t);
    return 0;
}
