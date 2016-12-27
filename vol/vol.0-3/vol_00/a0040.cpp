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

int main(){
    int mod=1000000007;
    int n,len,x,y;
    char s[260];
    scanf("%d",&n);
    for (int i=0;i<n;++i) {
        fgets(s,260,stdin);
        len=strlen(s)-1;
        for (int a=0;a<26;++a) {
            if (gcd(a,26)!=1) continue;
            for (int b=0;b<26;++b) {
                char chk[len];
                for (int c=0;c<len;++c) {
                    if (isalpha(s[c])) {
                        chk[c]=((((s[c]-'a')*a+b)%26)+'a');
                        if (!strncmp(&chk[c],"this",4) || !strncmp(&chk[c],"that",4)) {
                            x=a;
                            y=b;
                            break;
                        }
                    }
                }
            }
        }
        for (int p=0;p<len;++p) {
            printf("%c\n",(((s[p]-'a')*x+y)%26+'a'));
        }
        printf("\n");
    }
    return 0;
}
