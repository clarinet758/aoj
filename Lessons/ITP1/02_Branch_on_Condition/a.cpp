#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int a,b;
    sc2(a,b);
    if(a>b)  puts("a > b");
    else if(a<b) puts("a < b");
    else puts("a == b");
    return 0;
}
