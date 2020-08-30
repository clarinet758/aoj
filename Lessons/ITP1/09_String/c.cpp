#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    int n,a=0,b=0;
    sc1(n);
    rep(i,n){
        char s1[105],s2[105];
        scanf("%s",s1);
        scanf("%s",s2);
        if(strcmp(s1,s2)>0)  a+=3;
        else if(strcmp(s1,s2)<0)  b+=3;
        else {a++;b++;}
    }
    printf("%d %d\n",a,b);
    return 0;
}
