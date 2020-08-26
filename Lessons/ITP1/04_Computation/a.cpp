#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int a,b;
    sc2(a,b);
    printf("%d %d %.10lf\n",a/b,a%b,a*1.0/b);
    return 0;
}
