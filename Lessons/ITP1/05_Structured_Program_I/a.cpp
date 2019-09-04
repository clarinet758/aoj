#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    for (;;) {
        scanf("%d %d",&h,&w);
        if (h==0 && w==0) break;
        for (int i=0;i<h;i++) {
            for (int j=0;j<w;j++) {
                if (j<w-1) printf("#");
                else printf("#\n");
            }
        }
        puts("");
    }
    return 0;
}
