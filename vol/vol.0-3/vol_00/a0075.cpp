#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int teep=120*60;
    int s;
    double w,h;
    while(scanf("%d,%lf,%lf",&s,&w,&h)!=EOF) {
        if (25.0-w/(h*h)<1e-10) printf("%d\n",s);
    }
    return 0;
}
