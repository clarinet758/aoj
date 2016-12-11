#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/


int insertionSort(int l[],int x){
    for (int i=0;i<x;i++){
        int v=l[i];
        int j=i-1;
        while (j>=0 && l[j]>v) {
            l[j+1]=l[j];
            j--;
        }
        l[j+1]=v;
        for (int p=0;p<x-1;p++) {
            printf("%d ",l[p]);
        }
        printf("%d\n",l[x-1]);
    }
    return 0;
}


int main(){
    int mod=1000000007;
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    }
    insertionSort(a,n);
    return 0;
}
