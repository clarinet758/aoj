#!/usr/bin/env python
# -*- coding: UTF-8 -*-
import time
import sys
import io
import re
import math
import itertools
import collections
#sys.stdin=file('input.txt')
#sys.stdout=file('output.txt','w')
#10**9+7
mod=1000000007
#mod=1777777777
pi=3.141592653589
xy=[(1,0),(-1,0),(0,1),(0,-1)]
bs=[(-1,-1),(-1,1),(1,1),(1,-1)]
def gcd(a,b): return a if b==0 else gcd(b,a%b)
def lcm(a,b): return a*b/gcd(a,b)
def choco(xa,ya,xb,yb,xc,yc,xd,yd): return 1 if abs((yb-ya)*(yd-yc)+(xb-xa)*(xd-xc))<1.e-10 else 0
#memo roiti 899783
def x():
    m=-10**9
    for i in N:
        p=[0]*n
        for j in range(i,n):
            for k in N:
                p[k]+=l[k][j]
            m=max(P(p),m)
    return m

def P(a):
    m,c=-10**5,0
    for x in N:
        c+=a[x]
        m=max(c,m)
        if c<0:
            c=0
    return m


n=int(raw_input())
N=range(n)
l=[]
for i in N:
    l.append(map(int,raw_input().split()))
print x()

#l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
