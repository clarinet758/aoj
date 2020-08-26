#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char op[1];
    for(;;) {
        scanf("%d %c %d",&a,op,&b);
        if (op[0]=='?') break;
        else if (op[0]=='+') printf("%d\n",a+b);
        else if (op[0]=='-') printf("%d\n",a-b);
        else if (op[0]=='*') printf("%d\n",a*b);
        else if (op[0]=='/') printf("%d\n",a/b);
    }
    return 0;
}
