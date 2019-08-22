#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    printf("%s\n",((x>=r && x+r<=w) && (y>=r && y+r<=h))?"Yes":"No");
    return 0;
}
