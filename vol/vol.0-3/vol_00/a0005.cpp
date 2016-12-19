#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

//typedef int kz;
//typedef long kz;
typedef long long kz;

kz gcd(kz a,kz b) { if(b==0) return a; else gcd(b,a%b); }
kz lcm(kz a,kz b) { return a*b/gcd(a,b); }

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
    while ((scanf("%d %d",&a,&b))!=EOF) {
        printf("%d %d\n",gcd(max(a,b),min(a,b)),lcm(max(a,b),min(a,b)));
    }
    return 0;
}
