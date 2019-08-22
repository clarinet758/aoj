#include<bits/stdc++.h>
using namespace std;

int main(){
    for (;;) {
        int a,b;
        char op[5];
        scanf("%d %c %d",&a,op,&b);
        if (op[0]=='?') break;
        if (op[0]=='+') printf("%d\n",a+b);
        if (op[0]=='-') printf("%d\n",a-b);
        if (op[0]=='/') printf("%d\n",a/b);
        if (op[0]=='*') printf("%d\n",a*b);
    }
    return 0;
}
