#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define sl3(a,b,c)  scanf("%lld %lld %lld",&a,&b,&c)

long long inf=(1ll<<31)-1;
long long seg[1<<20];

void val(long long ind,long long v) {
    ind += 1<<19;
    seg[ind]=v;
    while ((ind/=2)>0) seg[ind]=min(seg[ind*2],seg[ind*2+1]);
}

long long getm(long long ql,long long qr,long long sl=0ll,long long sr=1<<19,long long pos=1ll){
    if (qr<=sl || sr<=ql) return inf;
    if (ql<=sl && sr<=qr) return seg[pos];
    long long sm=(sl+sr)/2;
    long long lmin =getm(ql,qr,sl,sm,pos*2);
    long long rmin =getm(ql,qr,sm,sr,pos*2+1);
    return min(lmin,rmin);
}

int main(){
    //cout<<inf  << endl;
    int n,q;
    sc2(n,q);
    rep(i,n) val(i,inf);
    rep(i,q){
        long long a,b,c;
        sl3(a,b,c);
        if (a==0) val(b,c);
        else printf("%lld\n",getm(b,c+1));
    }

    return 0;
}
