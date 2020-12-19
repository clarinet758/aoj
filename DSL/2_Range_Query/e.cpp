#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define SEG_LEN (1<<18)

int seg[SEG_LEN * 2];

long long int get (int ind) {
    ind += SEG_LEN;
    long long int sum=0;
    sum+=seg[ind];
    for(;;){
        ind/=2;
        if (ind==0) break;
        sum+=seg[ind];
    }
    return sum;
}

void add(int l, int r,int x) {
    l+=SEG_LEN;
    r+=SEG_LEN;
    for(;;){
        if (l>=r) break;
        if(l%2==1){
            seg[l]+=x;
            l++;
        }
        l/=2;
        if(r%2==1){
            seg[r-1]+=x;
            r--;
        }
        r/=2;
    }
}

int main(){
    int n,q;
    sc2(n,q);
    rep(i,q){
        int a,b,c,d;
        sc1(a);
        if(a==0) {
            sc3(b,c,d);
            add(b,c+1,d);
        }
        if(a==1) {
            sc1(b);
            printf("%lld\n",get(b));
        }
    }
    return 0;
}
