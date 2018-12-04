#include<bits/stdc++.h>
using namespace std;
int main(){
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    printf("%s\n",((0<=y-r && H>=y+r) && (0<=x-r && W>=x+r))?"Yes":"No");
    return 0;
}
