#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> a(3);
    for (auto&e:a) scanf("%d",&e);
    sort(a.begin(),a.end());
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}
