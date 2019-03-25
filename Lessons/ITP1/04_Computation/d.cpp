#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<int> a(n);
    for (auto&e:a) scanf("%d",&e);
    sort(a.begin(), a.end());
    long long  sum=accumulate(a.begin(),a.end(),0ll);
    printf("%d %d %lld\n",a[0],a[n-1],sum);
    return 0;
}
