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
    int n,m,t;
    scanf("%d %d",&n,&m);
    int a[n-1][m-1], b[m-1], ans[n-1];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m-1;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n-1;i++){
        t=0;
        for(int j=0;j<m-1;j++){
            printf("%d %d\n",a[i][j],b[j]);
            t+=a[i][j]*b[j];
        }
        ans[i]=t;
    }
    for(int i=0;i<n-1;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
