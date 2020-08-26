#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int a,b;
    for(;;) {
        sc2(a,b);
        if (a==0 && b==0) break;
        printf("%d %d\n",min(a,b),max(a,b));
    }
    return 0;
}
