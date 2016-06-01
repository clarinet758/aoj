#!/usr/bin/env python
# -*- coding: UTF-8 -*-
import time
import sys
import io
import re
import math
import itertools
import collections
import bisect
#sys.stdin=file('input.txt')
#sys.stdout=file('output.txt','w')
#10**9+7
mod=1000000007
#mod=1777777777
pi=3.141592653589
IS=float('inf')
xy=[(1,0),(-1,0),(0,1),(0,-1)]
bs=[(-1,-1),(-1,1),(1,1),(1,-1)]
def gcd(a,b): return a if b==0 else gcd(b,a%b)
def lcm(a,b): return a*b/gcd(a,b)
def euclid_dis(x1,y1,x2,y2): return ((x1-x2)**2+(y1-y2)**2)**0.5
def choco(xa,ya,xb,yb,xc,yc,xd,yd): return 1 if abs((yb-ya)*(yd-yc)+(xb-xa)*(xd-xc))<1.e-10 else 0

#n=int(raw_input())
cnt=0
l,p=[],[]
m,q={},{}
while 1:
    n,k=map(str,raw_input().split())
    cnt+=1
    n,k=int(n),float(k)
    l.append(k)
    m[k]=n
    if cnt%8==0:
        l.sort()
        for i in range(8):
            if i<2:
                print m[l[i]],'%.2f'%l[i]
            else:
                p.append(l[i])
                q[l[i]]=m[l[i]]
        l=[]
        m={}
    if cnt==24:
        break
p.sort()
for i in range(2):
    print q[p[i]],'%.2f'%p[i]
ans=chk=0
#end = time.clock()
#print end - start
