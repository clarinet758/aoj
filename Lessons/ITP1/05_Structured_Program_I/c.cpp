#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    for (;;) {
        scanf("%d %d",&h,&w);
        if (h==0) break;
        for (int j=0;j<h;j++) {
            for (int k=0;k<w;k++) {
                printf("%c",(j+k)%2?'.':'#');
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
