#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    bool a[1001]={false};
    bool b[1001]={false};
    int mm[1001]={0};
    char tmp[100];
    int x,y;
    for (;;) {
        fgets(tmp,100,stdin);
        if(tmp[0]<'0' || tmp[0]>'9') break;
        sscanf(tmp,"%d,%d",&x,&y);
        a[x]=true;
        mm[x]+=1;
    }
    for (;;) {
        if (fgets(tmp,100,stdin)==NULL) break;
        sscanf(tmp,"%d,%d",&x,&y);
        b[x]=true;
        mm[x]+=1;
    }
    for (int i=1;i<1001;++i) {
        if (a[i] && b[i]) {
            printf("%d %d\n",i,mm[i]);
        }
    }
    return 0;
}
