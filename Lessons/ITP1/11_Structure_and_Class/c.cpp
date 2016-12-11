#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>d1(6);
    vector<int>d2(6);
    for(auto&e:d1){
        scanf("%d",&e);
    }
    for(auto&e:d2){
        scanf("%d",&e);
    }

    for(int i=0;i<4;i++){
        int tmp1=d1[0];
        d1[0]=d1[2], d1[2]=d1[5], d1[5]=d1[3], d1[3]=tmp1;
        for(int j=0;j<4;j++){
            int tmp2=d1[0];
            d1[0]=d1[1], d1[1]=d1[5], d1[5]=d1[4], d1[4]=tmp2;
            for(int k=0;k<4;k++){
                int tmp3=d1[1];
                d1[1]=d1[2], d1[2]=d1[4], d1[4]=d1[3], d1[3]=tmp3;
                if(equal(d1.cbegin(),d1.cend(),d2.cbegin())){
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }
    printf("No\n");
    return 0;
}
