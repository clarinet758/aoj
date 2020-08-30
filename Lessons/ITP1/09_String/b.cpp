#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)

int main(){
    for(;;) {
        char s1[205],s2[205];
        int n,p;
        scanf("%s",s1);
        if (s1[0]=='-') break;
        sc1(n);
        rep(i,n) {
            sc1(p);
            rep(j,strlen(s1)){
                //printf("%ld\n",(j+p)%strlen(s1));
                s2[j]=s1[(j+p)%strlen(s1)];
            }
            rep(j,strlen(s1)){
                s1[j]=s2[j];
            }
        }
        printf("%s\n",s1);

    }
    return 0;
}
