#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define SEG_LEN (1<<18)

int seg[SEG_LEN * 2];

void add (int ind,int v) {
    ind += SEG_LEN;
    seg[ind]+=v;
    for(;;){
        ind/=2;
        if (ind==0) break;
        seg[ind]=seg[ind*2]+seg[ind*2+1];
    }
}

int sum(int l, int r) {
    l+=SEG_LEN;
    r+=SEG_LEN;
    int ans=0;
    for(;;){
        if (l>=r) break;
        if(l%2==1){
            ans+=seg[l];
            l++;
        }
        l/=2;
        if(r%2==1){
            ans+=seg[r-1];
            r--;
        }
        r/=2;
    }
    return ans;
}

int main(){
    int n,q;
    sc2(n,q);
    rep(i,q){
        int a,b,c;
        sc3(a,b,c);
        if(a==0) add(b,c);
        if(a==1) printf("%d\n",sum(b,c+1));
    }
    return 0;
}
