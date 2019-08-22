#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<int> a(n);
    for (auto&e:a) scanf("%d",&e);
    sort(a.begin(),a.end());
    long long t=accumulate(a.begin(),a.end(),0ll);
    if (n==0) printf("0 0 0\n");
    else printf("%d %d %lld\n",a[0],a[n-1],t);
    return 0;
}
