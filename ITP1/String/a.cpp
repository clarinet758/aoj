#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    char chk[10], t[1000];
    int ans=0;
    string ask,tmp;
    scanf("%s",&chk);
    ask=chk;
    transform(ask.begin(),ask.end(),ask.begin(),::toupper);
    for(;;){
        scanf("%s",&t);
        tmp=t;
        if(tmp=="END_OF_TEXT") break;
        transform(tmp.begin(),tmp.end(),tmp.begin(),::toupper);
        if(tmp==ask){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}