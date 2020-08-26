#include<bits/stdc++.h>
using namespace std;

#define sc1(a)  scanf("%d",&a)
#define rep(i,n)  for(int i=0;i<n;++i)

int main(){
    vector <int> a(3);
    rep(i,3) sc1(a[i]);
    sort(a.begin(),a.end());
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}
