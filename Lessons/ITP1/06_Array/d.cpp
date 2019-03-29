#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans;
    scanf("%d %d",&n,&m);
    int a[n][m],b[m];
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) scanf("%d",&a[i][j]);
    for (int i=0;i<m;i++) scanf("%d",&b[i]);
    for (int i=0;i<n;i++) {
        int x=0;
        for (int j=0;j<m;j++) x+=a[i][j]*b[j];
        printf("%d\n",x);
    }
    return 0;
}
