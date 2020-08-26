#include<bits/stdc++.h>
using namespace std;

#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)

int main(){
    int a,b,c;
    sc3(a,b,c);
    printf("%s\n",(a<b && b<c)?"Yes":"No");
    //puts("%s",(a<b && b<c)?"Yes":"No");
    return 0;
}
