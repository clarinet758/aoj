#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define sl3(a,b,c)  scanf("%lld %lld %lld",&a,&b,&c)
#define SEG_LEN (1ll<<18)

long long seg[SEG_LEN * 2ll];
long long p = 1ll<<31;

void add (long long ind,long long v) {
    ind += SEG_LEN*1ll;
    seg[ind]=v;
    for(;;){
        ind/=2ll;
        if (ind==0ll) break;
        seg[ind]=min(seg[ind*2ll],seg[ind*2ll+1ll]);
    }
}

long long  get(long long l, long long r) {
    l+=SEG_LEN*1ll;
    r+=SEG_LEN*1ll;
    long long ans=p;
    for(;;){
        if (l>=r) break;
        if(l%2ll==1ll){
            ans=min(ans,seg[l]);
            l++;
        }
        l/=2ll;
        if(r%2ll==1ll){
            ans=min(ans,seg[r-1ll]);
            r--;
        }
        r/=2ll;
    }
    return ans;
}

int main(){
    p-=1;
    //cout<< p << endl;
    int n,q;
    sc2(n,q);
    for(long long i=0;i<SEG_LEN*2ll;i++) seg[i]=p;
    rep(i,q){
        long long a,b,c;
        sl3(a,b,c);
        if(a==0ll) add(b,c);
        if(a==1ll) printf("%lld\n",get(b,c+1ll));
    }
    return 0;
}
