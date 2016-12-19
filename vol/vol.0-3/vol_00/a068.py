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
#memo roiti 933653
def a(v1,v2):
    if v1[0]!=v2[0]:
        return (v2[1]-v1[1])/(v2[0]-v1[0])
    else:
        return (v2[1]-v1[1])*(10**10)

def dlt(p,v,sign):
    while len(p)>2:
        if sign*(a(v[p[-3]],v[p[-2]])-a(v[p[-2]],v[p[-1]]))<0:
            del p[-2]
        else:
            break
    return p

def convex(v,n):
    d,u=[],[]
    for i in range(n):
        d=dlt(d+[i],v,1)
        u=dlt(u+[i],v,-1)
    return n-len(set(d+u))

while 1:
    n=int(raw_input())
    if n==0:
        break
    v=[map(float,raw_input().split(',')) for i in range(n)]
    v=sorted(sorted(v,key=lambda x:x[1]))
    print convex(v,n)
exit()
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
