#include<bits/stdc++.h>
using namespace std;

int main(){
    int mod=1000000007;
    int n,b,f,r,v;
    int d[4][3][10];
    for (int i=0;i<4;i++) for (int j=0;j<3;j++) for (int k=0;k<10;k++) d[i][j][k]=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d %d %d %d",&b,&f,&r,&v);
        d[b-1][f-1][r-1]+=v;
    }
    for (int i=0;i<4;i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<10;k++) {
                printf(" %d",d[i][j][k]);
                if (k==9) printf("\n");
            }
        }
        if (i<3) printf("####################\n");
    }
    return 0;
}
