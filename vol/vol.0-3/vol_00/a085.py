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

#n=int(raw_input())
while 1:
    n,m=map(int,raw_input().split())
    if n==0:
        break
    l=range(1,n+1)
    tmp=[]
    cnt=0
    while 1:
        if len(l)==1 and len(tmp)==0:
            print l.pop()
            break
        cnt+=1
        if cnt%m:
            tmp.append(l.pop(0))
        else:
            l.pop(0)
        if len(l)==0:
            l=tmp
            tmp=[]
exit()
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
