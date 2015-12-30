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
#memo roiti 899706
def mx(p,w,h,l):
    if h<=c/2:
        if w==0:
            p[h][w]+=p[h-1][w]
        elif w==l-1:
            p[h][w]+=p[h-1][w-1]
        else:
            p[h][w]+=max(p[h-1][w],p[h-1][w-1])
    else:
        p[h][w]+=max(p[h-1][w],p[h-1][w+1])
    return p
c=0
p=[]
while 1:
    try:
        p.append(map(int, raw_input().split(',')))
        c+=1
    except:
        break

for h in range(1,c):
    l=len(p[h])
    for w in range(l):
        p=mx(p,w,h,l)
print p[c-1][0]
exit()
n=int(raw_input())
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
