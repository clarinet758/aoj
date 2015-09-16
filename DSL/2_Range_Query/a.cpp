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
    int tmp=2147483647;
    scanf("%d %d",&n,&q);
    vector<int> l(n);
    fill(l.begin(),l.end(),tmp);
    for(int i=0;i<q;i++){
        int c,x,y;
        scanf("%d %d %d",&c,&x,&y);
        if(c!=0){
            printf("%d\n",*min_element(l.begin()+x,l.begin()+y+1));
        }else{
            l[x]=y;
        }
    }
    return 0;
}
