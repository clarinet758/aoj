#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,h,x,y,r;
    scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);
    printf("%s\n",((x-r>=0 && y-r>=0) && (x+r<=w && y+r<=h))?"Yes":"No");
    return 0;
}
