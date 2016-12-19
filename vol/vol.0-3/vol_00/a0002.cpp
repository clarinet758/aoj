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

int main(){
    int mod=1000000007;
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF) {
        int tmp=a+b,ans=1;
        while (tmp>=10) {
            tmp/=10;
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
