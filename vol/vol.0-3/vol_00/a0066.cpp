#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    char tmp[10];
    int x,y,f,cnt=0;
    while (scanf("%s",tmp)!=EOF) {
        f=0;
        if (tmp[0]==tmp[1] && tmp[1]==tmp[2] && tmp[2]!='s') {
            printf("%c\n",tmp[0]);
            f=1;
        } else if (tmp[3]==tmp[4] && tmp[4]==tmp[5] && tmp[5]!='s') {
            printf("%c\n",tmp[3]);
            f=1;
        } else if (tmp[6]==tmp[7] && tmp[7]==tmp[8] && tmp[8]!='s') {
            printf("%c\n",tmp[6]);
            f=1;
        } else if (tmp[0]==tmp[3] && tmp[3]==tmp[6] && tmp[6]!='s') {
            printf("%c\n",tmp[6]);
            f=1;
        } else if (tmp[1]==tmp[4] && tmp[4]==tmp[7] && tmp[7]!='s') {
            printf("%c\n",tmp[7]);
            f=1;
        } else if (tmp[2]==tmp[5] && tmp[5]==tmp[8] && tmp[8]!='s') {
            printf("%c\n",tmp[8]);
            f=1;
        } else if (tmp[0]==tmp[4] && tmp[4]==tmp[8] && tmp[8]!='s') {
            printf("%c\n",tmp[8]);
            f=1;
        } else if (tmp[2]==tmp[4] && tmp[4]==tmp[6] && tmp[6]!='s') {
            printf("%c\n",tmp[6]);
            f=1;
        }
        if (f==0) printf("d\n");
    }
    return 0;
}
