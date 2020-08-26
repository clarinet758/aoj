#include<bits/stdc++.h>
using namespace std;

#define sc1(a)  scanf("%d",&a)

int main(){
    int n;
    for(int i=1;;i++) {
        sc1(n);
        if(n==0) break;
        printf("Case %d: %d\n",i,n);
    }
    return 0;
}
