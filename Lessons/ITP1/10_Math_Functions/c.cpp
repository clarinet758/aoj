#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    for(;;){
        int n,t,m,ans;
        double v,p=0;
        sc1(n);
        if (n==0) break;
        vector <int> s(n);
        for(auto&e:s) sc1(e);
        t=accumulate(s.begin(),s.end(),0);
        v=1.0*t/n;
        rep(i,n) p+=pow((s[i]-v),2);
        printf("%.10lf\n",pow((p/n),0.5));
    }
    return 0;
}
