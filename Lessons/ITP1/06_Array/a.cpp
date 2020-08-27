#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n;
    sc1(n);
    vector <int> a(n);
    rep(i,n) sc1(a[i]);
//    sort(a.begin(),a.end());
    for (int i=n-1;i>0;i--) {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[0]);
    return 0;
}
