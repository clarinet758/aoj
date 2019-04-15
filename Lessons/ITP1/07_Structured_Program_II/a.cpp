#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    for (;;) {
        scanf("%d %d %d",&a,&b,&c);
        if (a+b+c==-3) break;
        if (a==-1 || b==-1 || a+b<30) {
            printf("F\n");
        } else if ( a+b>79) {
            printf("A\n");
        } else if ( a+b>64) {
            printf("B\n");
        } else if ( a+b>49) {
            printf("C\n");
        } else {
            printf("%s\n",c>49?"C":"D");
        }
    }
    return 0;
}
