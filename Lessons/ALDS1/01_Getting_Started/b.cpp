#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int gcd(int a,int b) {
    if (a<b) swap(a,b);
    while (b>0) {
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main(){
    int x,y;
    sc2(x,y);
    printf("%d\n",std::__gcd(x,y));
    return 0;
}
