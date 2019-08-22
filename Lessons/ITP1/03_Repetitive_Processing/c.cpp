#include<bits/stdc++.h>
using namespace std;

int main(){
    for (;;) {
        int x,y;
        scanf("%d %d",&x,&y);
        if (x==y && x==0) break;
        printf("%d %d\n",min(x,y),max(x,y));
    }
    return 0;
}
