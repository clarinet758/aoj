#include<bits/stdc++.h>
using namespace std;

#define sc1(a)  scanf("%d",&a)
#define rep(i,n)  for(int i=0;i<n;++i)

struct Card {char suit,value;};

void bubble(struct Card A[], int n) {
    rep(i,n) {
        for (int j=n-1;j>=i+1;j--) {
            if(A[j].value<A[j-1].value) {
                Card t=A[j];A[j]=A[j-1];A[j-1]=t;
            }
        }
    }
}

void selection(struct Card A[],int n) {
    rep(i,n) {
        int minj=i;
        for(int j=i;j<n;j++) {
            if(A[j].value<A[minj].value) minj=j;
        }
        Card t=A[i];A[i]=A[minj];A[minj]=t;
    }
}

void print(struct Card A[],int n) {
    rep(i,n) {
        if(i>0) printf(" ");
        cout << A[i].suit << A[i].value;
    }
    puts("");
}

bool isStable(struct Card C1[],struct Card C2[],int n) {
    rep(i,n) if(C1[i].suit!=C2[i].suit) return 0;
    return 1;
}

int main() {
    Card C1[100],C2[100];
    int n;
    char ch;
    sc1(n);
    rep(i,n) cin >> C1[i].suit >> C1[i].value;
    rep(i,n) C2[i]=C1[i];
    bubble(C1,n);
    selection(C2,n);
    print(C1,n);
    printf("Stable\n");
    print(C2,n);
    if (isStable(C1,C2,n)){
        printf("Stable\n");
    }else{
    printf("Not stable\n");
    }
    return 0;
}

/***
#define per(i,n)  for(int i=n-1;i>=0;--i)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define sl1(a)  scanf("%lld",&a)
#define sl2(a,b)  scanf("%lld %lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld %lld %lld",&a,&b,&c)
#define PI 3.1415926535897932

int lcm(int a,int b) { return a*b/__gcd(a,b); }
//long long lcm(ll a,ll b) { return a*b/__gcd(a,b); }

 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);


int main(){
    int n,m,ans;
    sc1(n);
    char a[2][n],b[2][n];
    rep(i,n) {
        scanf("%s",a[i]);
        strcpy(b[i],a[i]);
    }
    printf("%s %s\n",a[0],a[2]);
    printf("%s %s\n",b[0],b[2]);
    //scanf("%d %d",&n,&m);
    n=5;
    //    printf("%d\n",i);
    return 0;
}
***/
