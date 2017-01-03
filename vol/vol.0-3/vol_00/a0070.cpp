#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/
int dp[11][331][1025];

int solve(int n,int s,int used) {
    if (n==0 && s==0) return 1;
    if (n<=0 || s<0) return 0;
    if (dp[n][s][used] != -1) return dp[n][s][used];

    int sum=0;
    for (int i=0;i<10;++i) {
        if ((used>>i)%2==0) {
            used+=1<<i;
            sum+=solve(n-1,s-i*n,used);
            used-=1<<i;
        }
    }
    return dp[n][s][used]=sum;
}


int main(){
    int n,s;
    memset(dp,-1,sizeof(dp));

    while (scanf("%d %d",&n,&s)!=EOF) {
        if (0<=s && s<=330) {
            int used=0;
            printf("%d\n",solve(n,s,used));
        } else {
            printf("0\n");
        }
    }
    return 0;
}
