#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    char s[5];
    bool d[4][13];
    for (int i=0;i<52;i++) d[i/13][i%13]=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%s %d",&s,&k);
//        printf("%c %d\n",s[0],k);
        if (s[0]=='S') d[0][k-1]=1;
        if (s[0]=='H') d[1][k-1]=1;
        if (s[0]=='C') d[2][k-1]=1;
        if (s[0]=='D') d[3][k-1]=1;
    }
    for (int i=0;i<52;i++) {
        if (d[i/13][i%13]==0) {
            if (i/13==0) printf("S %d\n",i%13+1);
            if (i/13==1) printf("H %d\n",i%13+1);
            if (i/13==2) printf("C %d\n",i%13+1);
            if (i/13==3) printf("D %d\n",i%13+1);
        }
    }
    return 0;
}
