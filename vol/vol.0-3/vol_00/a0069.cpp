#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main() {
    int n,m,a,d,tmp;
    int b[30][10];
    char s[10];
    bool f;

    for (;;) {
        scanf("%d",&n);
        if (n==0) break;
        scanf("%d",&m);
        scanf("%d",&a);
        scanf("%d",&d);

        for (int i=0;i<d;++i) {
            scanf("%s",&s);
            for (int j=0;j<n-1;++j) {
                b[i][j]=s[j]-'0';
            }
        }

        tmp=m;
        for(int i=0;i<d;++i) {
            if(tmp<n && b[i][tmp-1]) tmp++;
            else if (tmp>1 && b[i][tmp-2]) tmp--;
        }
        if(tmp==a) {
            printf("0\n");
        } else {
            f=0;
            for (int i=0;i<d;++i) {
                for (int j=0;j<n-1;++j) {
                    if (!b[i][j] && (!j || !b[i][j-1]) && (j==n-2 || !b[i][j+1])) {
                        b[i][j]=1;
                        tmp=m;
                        for (int k=0;k<d;++k) {
                            if (tmp<n && b[k][tmp-1]) tmp++;
                            else if (tmp>1 && b[k][tmp-2]) tmp--;
                        }

                        if (tmp==a) {
                            f=1;
                            printf("%d %d\n",i+1,j+1);
                        }
                        b[i][j]=0;
                    }
                    if (f) break;
                }
                if (f) break;
            } 
            if (!f) printf("1\n");
        }
    }
    return 0;
}
