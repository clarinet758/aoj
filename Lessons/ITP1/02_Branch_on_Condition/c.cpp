#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(3);
    for (int i=0;i<3;i++) scanf("%d",&a[i]);
    sort(a.begin(),a.end());  
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}
