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
#memo roiti 878489
x,y,r,l,s=[],[],[],[],[]
while 1:
    try:
        a,b=map(float,raw_input().split(','))
        x.append(a)
        y.append(b)
    except:
        break
for i in range(len(x)-1):
    r.append(((x[i+1]-x[0])**2+(y[i+1]-y[0])**2)**0.5)
for i in range(1,len(x)-1):
    l.append(((x[i+1]-x[i])**2+(y[i+1]-y[i])**2)**0.5)
for i in range(len(x)-2):
    s.append((r[i]+r[i+1]+l[i])/2)
sum=0.0
for i in range(len(x)-2):
    sum+=(s[i]*(s[i]-r[i])*(s[i]-r[i+1])*(s[i]-l[i]))**0.5
print sum
exit()
n=int(raw_input())
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
