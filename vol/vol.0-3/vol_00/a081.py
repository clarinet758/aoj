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
#memo roiti 898378
def sp(a,b,c,xq,yq):
    xr=xq-2*a*(a*xq+b*yq+c)/(a**2+b**2)
    yr=yq-2*b*(a*xq+b*yq+c)/(a**2+b**2)
    print xr,yr

while 1:
    try:
        x1,y1,x2,y2,xq,yq=map(float,raw_input().split(','))
        sp(y2-y1,-(x2-x1),x2*y1-x1*y2,xq,yq)
    except:
        break
exit()

n=int(raw_input())
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
