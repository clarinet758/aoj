#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0;i<n;++i)
#define sc1(a)  scanf("%d",&a)
#define sc2(a,b)  scanf("%d %d",&a,&b)
#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)
#define l 100005

typedef struct pp {
    char name[100];
    int t;
} P;

int head,tail,n;
P Q[l];

void enqueue(P x) {
    Q[tail]=x;
    tail=(tail+1)%l;
}

P dequeue() {
    P x = Q[head];
    head=(head+1)%l;
    return x;
}

int main(){
    int elaps=0, c,q;
    P u;
    sc2(n,q);
    for(int i=1;i<=n;i++){
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].t);
    }
    head=1; tail=n+1;
    while (head!=tail) {
        u=dequeue();
        c=min(q,u.t);
        u.t-=c;
        elaps+=c;
        if(u.t>0) enqueue(u);
        else printf("%s %d\n",u.name, elaps);
    }
    return 0;
}
