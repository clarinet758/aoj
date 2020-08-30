#include<bits/stdc++.h>
using namespace std;

int main(){
    int mod=1000000007;
    int n,m,ans;
    char s;
    for(;;) {
        scanf("%c",&s);
        if(s=='\n' || s=='\0') break;
        else if(isupper(s)) printf("%c",s-'A'+'a');
        else if(islower(s)) printf("%c",s-'a'+'A');
        else printf("%c",s);
    }
    puts("");
    return 0;
}
