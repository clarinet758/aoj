#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
#define NIL -1
#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define PI 3.1415926535897932

struct Node {int p, l, r;};

Node T[MAX];
int n, D[MAX];

void print(int u) {
    int c;
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if (T[u].p == NIL) cout << "root, ";
    else if (T[u].l ==NIL) cout << "leaf, ";
    else cout << "internal node, ";

    cout << "["; 
    for (int i=0, c=T[u].l; c!=NIL; i++, c=T[c].r) {
        if (i) cout <<", ";
        cout << c;
    }
    cout << "]" << endl;
}

int rec(int u, int p) {
    D[u]=p;
    if (T[u].r != NIL) rec(T[u].r, p);
    if (T[u].l != NIL) rec(T[u].l, p+1);
}


int main(){
    int d,v ,c, l, r;
    cin >> n;
    for (int i=0;i<n;i++) T[i].p=T[i].l=T[i].r=NIL;

    for (int i=0;i<n;i++) {
        cin >> v >> d;
        for(int j=0;j<d;j++) {
            cin >> c;
            if (j==0) T[v].l=c;
            else T[l].r=c;
            l=c;
            T[c].p=v;
        }
    }
    for (int i=0;i<n;i++) {
        if (T[i].p ==NIL ) r=i;
    }

    rec (r,0);

    for (int i=0; i<n; i++) print(i);
    return 0;
}
