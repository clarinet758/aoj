#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> d;
    int cnt=0;
    string s,l="0",w;
    while(cin>>s){
        d[s]++;
        if (cnt<d[s]) {
            cnt=d[s];
            w=s;
        }
        if(l.length()<s.length()) l=s;

    }
    printf("%s %s\n",w.c_str(),l.c_str());
    return 0;
}
