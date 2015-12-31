#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<numeric>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
/**
vector<int>ar(3);
for(auto&e:ar){
    scanf("%d",&e);
	}
sort(ar.begin(),ar.end())
int sum=accumulate(ar.begin(),ar.end(),0);
**/
//memo kyuridenamida 1237852
int main(){
    double pai=3.141592653589;
    int N,d;
    cin >> N >> d;
    vector< array<int,3> > star;
    for(int i = 0 ; i < N ; i++){
        int x,y,b;
        cin >> x >> y >> b;
        star.push_back(array<int,3>{b,x,y});
    }   
    sort(star.begin(),star.end());
    int l = 0 , r = 0;
    multiset<int> X,Y;
    long long ans = 0;
    while( r != N){
        X.insert(star[r][1]);
        Y.insert(star[r][2]);
        r++;
        while( star[r-1][0] - star[l][0] > d ){
            X.erase(X.find(star[l][1]));
            Y.erase(Y.find(star[l][2]));
            l++;
        }
        ans = max((long long)((*X.rbegin())-(*X.begin())) * ((*Y.rbegin())-(*Y.begin())),ans);
        //cout << (*X.rbegin())-(*X.begin()) << " " << ((*Y.rbegin())-(*Y.begin())) << "|" << star[r-1][0] - star[l][0] << endl;
    }
    cout << ans << endl;
}
