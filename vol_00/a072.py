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
#memo roiti 898416

while 1:
    n=int(raw_input())
    if n==0:
        break
    m=int(raw_input())
    s=[map(int ,raw_input().split(',')) for i in range(m)]
    s=sorted(s, key=lambda x:x[2])
    ls=range(n)
    ref=ls[:]
    ans=0
    while s:
        x,y,d=s.pop(0)
        a,b=ref[x],ref[y]
        if a!=b:
            for j in ls:
                if ref[j]==a:
                    ref[j]=b
            ans+=d/100-1
    print ans

n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
