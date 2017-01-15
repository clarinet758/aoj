#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    char s[51];
    while(scanf("%s",&s)!=EOF) {
        int len=strlen(s);
        int f=0;
        for (int i=0;i<len;++i) {
            if (f==0 and s[i]!='@') {
                printf("%c",s[i]);
            } else if (s[i]=='@') {
                f=1;
            } else if (f==1) {
                f=2;
            } else if (f==2) {
                for (int j=0;j<s[i-1]-'0';++j) {
                    printf("%c",s[i]);
                }
                f=0;
            }
        }
        printf("\n");
                
    }
    return 0;
}
