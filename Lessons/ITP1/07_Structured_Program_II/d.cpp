#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,l;
    long long t;
    scanf("%d %d %d",&n,&m,&l);
    int a[n][m]={0},b[m][l]={0},ans[n][l];
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) scanf("%d ",&a[i][j]);
    for (int i=0;i<m;i++) for (int j=0;j<l;j++) scanf("%d ",&b[i][j]);
    for (int i=0;i<n;i++) {
        for (int j=0;j<l;j++) {
            t=0ll;
            for (int x=0;x<m;x++){
                t+=a[i][x]*b[x][j];
            }
            if (j+1<l) printf("%lld ",t);
            else printf("%lld\n",t);
        }
    }
    return 0;
}
