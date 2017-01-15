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
    int t,h,s;
    for (;;) {
        scanf("%d %d %d",&t,&h,&s);
        if (t==-1) break;
        int hyojun=teep-(t*3600+h*60+s);
        printf("%02d:%02d:%02d\n",hyojun/3600,(hyojun%3600)/60,hyojun%60);
        hyojun*=3;
        printf("%02d:%02d:%02d\n",hyojun/3600,(hyojun%3600)/60,hyojun%60);
    }
    return 0;
}
