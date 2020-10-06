#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)

char w[10][10];
int main(){
    int n,m,ans;
    int cnt=0;
    while(scanf("%s",w[cnt])!=EOF) {
        if (cnt%8==7) {
            int f,x,y;
            rep(i,64)  {
                x=i/8;
                y=i%8;
                if (w[x][y]=='1') {
                    if (x<7 && y<7 && w[x+1][y]=='1' && w[x][y+1]=='1' && w[x+1][y+1]=='1') f=0;
                    else if (x<5 && w[x+1][y]=='1' && w[x+2][y]=='1' && w[x+3][y]=='1') f=1;
                    else if (y<5 && w[x][y+1]=='1' && w[x][y+2]=='1' && w[x][y+3]=='1') f=2;
                    else if (x<6 && y>0 && w[x+1][y]=='1' && w[x+1][y-1]=='1' && w[x+2][y-1]=='1') f=3;
                    else if (y<6 && w[x][y+1]=='1' && w[x+1][y+1]=='1' && w[x+1][y+2]=='1') f=4;
                    else if (x<6 && w[x+1][y]=='1' && w[x+1][y+1]=='1' && w[x+2][y+1]=='1') f=5;
                    else f=6;
                    printf("%c\n",f+'A');
                    cnt=-1;
                    break;
                }

            }
        }
        cnt++;
    }
    return 0;
}
