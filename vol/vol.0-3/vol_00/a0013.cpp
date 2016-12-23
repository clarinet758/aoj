#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
    int n;
    stack<int> l;
    while (scanf("%d",&n)!=EOF) {
        if (n==0) {
            printf("%d\n",l.top());
            l.pop();
        } else {
            l.push(n);
        }
    }
    return 0;
}




