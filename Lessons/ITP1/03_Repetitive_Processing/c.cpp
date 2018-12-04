#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    for (;;) {
        scanf("%d %d",&x,&y);
        if (x==0 && x==y) break;
        printf("%d %d\n",min(x,y),max(x,y));
    } 
    return 0;
}
