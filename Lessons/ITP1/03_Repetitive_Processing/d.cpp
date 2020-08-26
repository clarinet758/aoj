#include<bits/stdc++.h>
using namespace std;

#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)

int main(){
    int a,b,c,ans=0;
    sc3(a,b,c);
    for (int i=a;i<=b;i++) {
        if (c%i==0) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
