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
    int n,m;
    vector<int> l(10);
    for(auto&e:l) {
        scanf("%d",&e);
    }
    sort(l.begin(),l.end());
    for(int i=9;i>6;i--) {
        printf("%d\n",l[i]);
    }
    return 0;
}
