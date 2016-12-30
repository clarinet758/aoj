#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    char str[102];
    int len,n=0,ans=0;
    while (fgets(str,102,stdin)!=NULL) {
        len=strlen(str)-1;
        for (int i=0;i<len;++i) {
            if(str[i]>='0' && str[i]<='9'){
                n*=10;
                n+=str[i]-'0';
            } else {
                ans+=n;
                n=0;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
