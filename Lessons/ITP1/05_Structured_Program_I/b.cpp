#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    for (;;) {
        scanf("%d %d",&h,&w);
        if (h==0) break;
        for (int j=0;j<h;j++) {
            for (int k=0;k<w;k++) {
                printf("%s",(j==0||j==h-1||k==0||k==w-1)?"#":".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
