#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (i%3==0) printf(" %d",i);
        else {
            int t=i;
            for (;;) {
                if (t%10==3) { printf(" %d",i);break; }
                else if (t<10) break;
                t/=10;
            }
        }
    }
    puts("");
    return 0;
}
