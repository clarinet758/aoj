#include<bits/stdc++.h>
using namespace std;

void sol(int x,int n) {
    int i=1;
    x=i;
    for (;;) {
        x=i;
        if (x%3==0 || x%10==3) {
            printf(" %d",i);
        } else {
            for(;;) {
                x/=10;
                if (x%10==3) {
                    printf(" %d",i);
                    break;
                }
                if (x==0) break;
            }
        }
        i++;
        if (i>n) break;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    sol(n,n);
    printf("\n");
    return 0;
}
