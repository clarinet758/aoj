#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    vector<int> v(3);
    for (auto&e:v) {
        scanf("%d",&e);
    }
    sort(v.begin(),v.end());
    printf("%d %d %d\n",v[0],v[1],v[2]);
    return 0;
}
