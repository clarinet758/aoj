#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int d1[7],d2[7];
    scanf("%d %d %d %d %d %d",&d1[0],&d1[1],&d1[2],&d1[3],&d1[4],&d1[5]);
    scanf("%d %d %d %d %d %d",&d2[0],&d2[1],&d2[2],&d2[3],&d2[4],&d2[5]);

    for(int i=0;i<4;i++){
        int tmp1=d1[0];
        d1[0]=d1[2]; d1[2]=d1[5]; d1[5]=d1[3]; d1[3]=tmp1;
        for(int j=0;j<4;j++){
            int tmp2=d1[0];
            d1[0]=d1[1]; d1[1]=d1[5]; d1[5]=d1[4]; d1[4]=tmp2;
            for(int k=0;k<4;k++){
                int tmp3=d1[1];
                d1[1]=d1[2]; d1[2]=d1[4]; d1[4]=d1[3]; d1[3]=tmp3;
                int chk=0;
                for(int p=0;p<6;p++){
                    if(d1[p]!=d2[p]){
                        break;
                    }else{
                        chk++;
                    }
                    if(chk==6){
                        printf("Yes\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("No\n");
    return 0;
}
