#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    if (0<=y-r && h>=y+r && 0<=x-r && w>=x+r)  printf("Yes\n");
    else printf("No\n");
    return 0;
}
