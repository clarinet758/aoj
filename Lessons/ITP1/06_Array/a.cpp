#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector <int>a(n);
    for (auto&e:a) scanf("%d",&e);
    for (int i=n-1;i>=0;i--) {
        printf("%d",a[i]);
        printf(i!=0?" ":"\n");
    }
    return 0;
}
