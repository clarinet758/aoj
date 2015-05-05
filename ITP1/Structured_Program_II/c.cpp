#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int r,c,tmp;
    scanf("%d %d",&r,&c);
    int sheet[r+1][c+1];
    sheet[r][c]=0;
    for(int i=0;i<r;i++){
        tmp=0;
        for(int j=0;j<c;j++){
            if(i==0) sheet[r][j]=0;
            scanf("%d",&sheet[i][j]);
            tmp+=sheet[i][j];
            sheet[r][j]+=sheet[i][j];
            sheet[r][c]+=sheet[i][j];
        }
        sheet[i][c]=tmp;
    }
    for(int i=0;i<r+1;i++){
        for(int j=0;j<c+1;j++){
            if(j<c){
                printf("%d ",sheet[i][j]);
            }else{
                printf("%d\n",sheet[i][j]);
            }
        }
    }
    return 0;
}
