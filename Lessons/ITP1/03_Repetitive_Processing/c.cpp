#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    for (;;) {
        scanf("%d %d",&x,&y);
        if (x+y==0) break;
        printf("%d %d\n",min(x,y),max(x,y));
    }
    return 0;
}
