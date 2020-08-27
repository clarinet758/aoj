#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int h,w;
    for(;;) {
        sc2(h,w);
        if(h==0) break;
        rep(i,h) {
            rep(j,w) {
                printf("%c",((i+j)%2==0)?'#':'.');
            }
            puts("");
        }
        puts("");
    }
    return 0;
}
