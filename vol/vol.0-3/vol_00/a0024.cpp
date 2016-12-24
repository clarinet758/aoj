#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    double v;
    while (scanf("%lf",&v)!=EOF) {
        double t=v/9.8;
        double y=t*t*4.9;
        int tmp;
        for (int j=0;;j++) {
            if ((j*5-5)*1.0>=y) {
                tmp=j;
                break;
            }
        }
        printf("%d\n",tmp);
    }
    return 0;
}
