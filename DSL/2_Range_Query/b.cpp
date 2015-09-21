#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int n,q;
//    int tmp=2147483647;
    scanf("%d %d",&n,&q);
    vector<int> l(n+1);
    fill(l.begin(),l.end(),0);
    for(int i=0;i<q;i++){
        int c,x,y;
        scanf("%d %d %d",&c,&x,&y);
        if(c!=0){
            printf("%d\n",accumulate(l.begin()+x,l.begin()+y+1,0));
        }else{
            l[x]+=y;
        }
    }
    return 0;
}
