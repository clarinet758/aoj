#include<bits/stdc++.h>
using namespace std;

int top,s[1000];

void push(int x) {
    s[++top]=x;
}

int pop() {
    top--;
    return s[top+1];
}

int main(){
    int a,b;
    top=0;
    char c[100];
    while (scanf("%s",c)!=EOF) {
        if (c[0]=='+') {
            a=pop();
            b=pop();
            push(a+b);
        } else if (c[0]=='-') {
            b=pop();
            a=pop();
            push(a-b);
        } else if (c[0]=='*') {
            a=pop();
            b=pop();
            push(a*b);
        } else {
            push(atoi(c));
        }
    }
    printf("%d\n",pop());
    return 0;
}
