#include<bits/stdc++.h>
using namespace std;

#define sc2(a,b)  scanf("%d %d",&a,&b)

int m[13]={0,0,31,60,91,121,152,182,213,244,274,305,335};
map <int,string> d{{0,"Wednesday"},{1,"Thursday"},{2,"Friday"},{3,"Saturday"},{4,"Sunday"},{5,"Monday"},{6,"Tuesday"}};

int main(){
    int a,b,c;
    for(;;){
        sc2(a,b);
        if(a==0) break;
        printf("%s\n",d[(m[a]+b)%7].c_str());
    }
    return 0;
}
