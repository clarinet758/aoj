#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

#define EACH(v, c) for(auto&v:c)

double EPS=1e-10;

struct P {
    double x,y;
    P() : x(0),y(0) {
        return; 
    }
    P(double x,double y) : x(x),y(y) {
        return; 
    }

    P operator + (const P &a) const {
        return P(x+a.x,y+a.y);
    }
    P operator - (const P &a) const {
        return P(x-a.x,y-a.y);
    }
    P operator * (const double &a) const {
        return P(x*a,y*a);
    }
    P operator / (const double &a) const {
        return P(x/a,y/a);
    }

    bool operator < (const P &a) const {
        return x==a.x?y<a.y:x<a.x;
    }
};

double cross(const P &a, const P &b) {
   return a.x*b.y-a.y*b.x;
}

vector<P> convex_hull(vector<P> ps) {
    const int n=ps.size();
    sort(ps.begin(),ps.end());
    int k=0;

    vector<P> convex(n*2);
    for (int i=0;i<n;++i) {
        while (k>1 && cross(convex[k-1]-convex[k-2], ps[i]-convex[k-1])<=0) k--;
        convex[k++]=ps[i];
    }

    for (int i=n-2,t=k;i>=0;--i) {
        while (k>t && cross(convex[k-1]-convex[k-2],ps[i]-convex[k-1])<=0) k--;
        convex[k++]=ps[i];
    }
    convex.resize(k-1);
    return convex;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    for (;;) {
        int n;
        cin>>n;
        if (n==0) {
            break;
        }
        vector<P> ps(n);
        int tmp=10;
        EACH(p, ps) {
            char d;
            cin >> p.x >> d >> p.y;
        }
        vector<P> convex=convex_hull(ps);
        printf("%d\n",n-convex.size());
    }
    return 0;
}
