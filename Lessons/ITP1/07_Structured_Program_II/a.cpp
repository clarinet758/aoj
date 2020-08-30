#include<bits/stdc++.h>
using namespace std;

#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)

int main(){
    int n,m,f,r;
    for(;;) {
        sc3(m,f,r);
        if(m+f+r==-3) break;
        if(m+f>=80) puts("A");
        else if(m+f>=65) puts("B");
        else if(m+f<=29 || m==-1 || f==-1) puts("F");
        else if(m+f>=50 || (m+f>=30 && r>=50)) puts("C");
        else if(m+f>=30) puts("D");
    }
    return 0;
}
