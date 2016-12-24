#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        double x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if (abs((y3-y4)*(x1-x2)-(y1-y2)*(x3-x4))<1e-10) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
