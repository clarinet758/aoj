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
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        vector<int> l(3);
        for (auto&e:l) {
            scanf("%d",&e);
        }
        sort(l.begin(),l.end());
        printf((l[0]*l[0]+l[1]*l[1]==l[2]*l[2])?"YES\n":"NO\n");
    }
    return 0;
}
