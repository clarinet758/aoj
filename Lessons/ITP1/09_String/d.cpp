#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)

int main(){
    int n,m,ans;
    char p[1005],q[1005];
    scanf("%s",p);
    sc1(n);
    rep(i,n) {
        char s[10];
        int a,b;
        scanf("%s",s);
        if (strcmp(s,"replace")==0){
            sc2(a,b);
            scanf("%s",q);
            for(int i=a;i<=b;i++) p[i]=q[i-a];
        } else if(strcmp(s,"reverse")==0){
            sc2(a,b);
            for(int i=a;i<=b;i++) q[i-a]=p[i];
            for(int i=a;i<=b;i++) p[i]=q[(b-a)-(i-a)];
        } else{
            sc2(a,b);
            for(int i=a;i<=b;i++) printf("%c",p[i]);
            puts("");
        }

    }
    return 0;
}
