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

cnt=0
a,b=[],[]
l={}
while 1:
    try:
        n,k=map(int,raw_input().split(','))
        if l.has_key(n):
            l[n][0]+=1
            if cnt==1:
                l[n][1]=2
        elif cnt==0:
            l[n]=[1,1]
    except:
        cnt+=1
        if cnt>1:
            break
for i in l:
    if l[i][1]==2:
        a.append([i,l[i][0]])
a.sort()
for i in a:
    print i[0],i[1]
exit()
l=map(int,raw_input().split())
ans=chk=0
n=int(raw_input())
#end = time.clock()
#print end - start
