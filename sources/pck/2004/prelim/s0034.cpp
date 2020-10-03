#include<bits/stdc++.h>
#include<numeric>

using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
int a,b,c,s,x;
int l[15];

int main(){
    while(scanf("%d,",&x)!=EOF) {
        l[c]=x;
        if (c<10) s+=x;
        c++;
        if (c < 12)  continue;
        c=0;
        int q=lcm(l[10],l[11]);
        int p=(s*q/(l[10]+l[11]))*l[10];
        //printf("%d %d %d\n",s,p,q);
        rep(i,10) {
            p-=(l[i]*q);
            if (p<=0) {printf("%d\n",i+1); break;}
        }
        s=0;
    }
    return 0;
}
