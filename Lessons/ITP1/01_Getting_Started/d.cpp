#include<bits/stdc++.h>
using namespace std;

#define sc1(a)  scanf("%d",&a)

int main(){
    int s;
    sc1(s);
    printf("%d:%d:%d\n",s/3600,(s%3600)/60,s%60);
    return 0;
}
