#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,x,ans=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a.at(i);
    for(int i=0;i<n-1;i++){
        x=i;
        for(int j=i+1;j<n;j++){
            if(a.at(j)<a.at(x))  x=j;
        }
        if(x!=i){
            ans++;
            swap(a.at(i),a.at(x));
        }
    }
    for(int i=0;i<n-1;i++) cout << a.at(i) << " ";
    cout << a.at(n-1) << endl;
    cout << ans << endl;
    return 0;
}
