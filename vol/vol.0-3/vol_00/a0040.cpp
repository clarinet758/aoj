#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

typedef complex<double> P;

#define X real()
#define Y imag()
typedef int kz;

kz gcd(kz a,kz b) { if(b==0) return a; else gcd(b,a%b); }

/// WA 出力結果にゴミが付く
/**
 * in
2
y eazqyp pnop pngtg ye obmpngt xmybp mr lygw
y eazqyp pnop pngtg ye obmpngt xmybp mr lygw y eazqyp pnop pngtg ye obmpngt xmybp mr lygw

 *out
i submit that there is another point of view
i submit that there is another point of view i submit that there is another point of view       @
 
**/
int main(){
    int mod=1000000007;
    int n,len,x,y;
    char s[260];
    scanf("%d",&n);
    while (fgets(s,260,stdin)!=NULL) {
        len=strlen(s)-1;
        bool flg=0;
        for (int a=0;a<26;++a) {
            if (gcd(a,26)!=1) continue;
            for (int b=0;b<26;++b) {
                char chk[len];
                for (int c=0;c<len;++c) {
                    if (isalpha(s[c])) {
                        chk[c]=(((s[c]-'a')*a+b)%26)+'a';
                    }
                }
                for (int d=0;d<len;++d) {
                    if (!strncmp(&chk[d],"this",4) || !strncmp(&chk[d],"that",4)) {
                        x=a;
                        y=b;
                        flg=1;
                    }
                }
            }
        }
        char ans[len];
        for (int i=0;i<len;++i) {
            if (isalpha(s[i])) ans[i]=(((s[i]-'a')*x+y)%26+'a');
            else ans[i]=s[i];
        }
        if (flg && len>3) printf("%s\n",ans);
        flg=0;
    }
    return 0;
}
