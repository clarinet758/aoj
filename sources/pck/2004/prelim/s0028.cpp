#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int cnt,n,a[105];
int main(){
    while(sc1(n)!=EOF) {
        a[n]+=1;
        cnt=max(cnt,a[n]);
    }
    rep(i,101){
        if (a[i]==cnt) printf("%d\n",i);
    }
    return 0;
}
