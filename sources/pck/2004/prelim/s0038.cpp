#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)

int main(){
    int a,b,c,d,e,x,y,z,s[20];
    while(scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e)!=EOF){
        rep(i,15) s[i]=0;
        s[a]+=1;s[b]+=1;s[c]+=1;s[d]+=1;s[e]+=1;
        s[14]+=s[1];
        x=0;y=0;z=1;
        for (int i=1;i<14;i++) {
            if (s[i]>=y) {
                x=y;
                y=s[i];
            } else if (s[i]>x) {
                x=s[i];
            }
            if (s[i-1]==1 && s[i]==1) z++;
            if (z==4 && s[13]==1 && s[1]==1 && s[2]==0) z++;
        }
        if (y==4) printf("four card\n");
        else if (y==3 && x==2) printf("full house\n");
        else if (z==5) printf("straight\n");
        else if (y==3) printf("three card\n");
        else if (y==2 && x==2) printf("two pair\n");
        else if (y==2) printf("one pair\n");
        else  printf("null\n");



    }
    return 0;
}
