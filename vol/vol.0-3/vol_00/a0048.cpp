#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

int main(){
    double s;
    while (scanf("%lf",&s)!=EOF){
        if (s<=48.0) {
            printf("light fly\n");
        } else if (s<=51.0) {
            printf("fly\n");
        } else if (s<=54.0) {
            printf("bantam\n");
        } else if (s<=57.0) {
            printf("feather\n");
        } else if (s<=60.0) {
            printf("light\n");
        } else if (s<=64.0) {
            printf("light welter\n");
        } else if (s<=69.0) {
            printf("welter\n");
        } else if (s<=75.0) {
            printf("light middle\n");
        } else if (s<=81.0) {
            printf("middle\n");
        } else if (s<=91.0) {
            printf("light heavy\n");
        } else {
            printf("heavy\n");
        }
    }
    return 0;
}
