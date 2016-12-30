#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    int mod=1000000007;
    char str[11];
    int a[10][10];
    while (scanf("%s ",str)!=EOF) {
        for (int i=0;i<10;++i) {
            a[0][i]=str[i]-'0';
        }
        for (int i=1;i<10;++i) {
            for (int j=0;j<10-i;++j) {
                a[i][j]=(a[i-1][j]+a[i-1][j+1])%10;
            }
        }
        printf("%d\n",a[9][0]);
    }
    return 0;
}
