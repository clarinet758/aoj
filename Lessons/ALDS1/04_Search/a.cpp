#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,q,ans=0;
    sc1(n);
    //int s[n];
    vector <int> s(n);
    rep(i,n) sc1(s[i]);
    sc1(q);
    int t[n];
    rep(i,q) {
        sc1(t[i]);
        rep(j,n) {
            if (s[j]==t[i]) {
                ans++;
                break;
            }
        }
        //ans+=binary_search(s.begin(),s.end(),t[i]);
    }
    printf("%d\n",ans);
    return 0;
}
