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

while 1:
    n=int(raw_input())
    if n==0:
        break
    l=[[0]*n for i in range(n)]
    x,y=n/2,n/2+1
    l[y][x]=1
    cnt=2
    while cnt<=n**2:
        x,y=(x+1)%n,(y+1)%n
        if l[y][x]==0:
            l[y][x]=cnt
            cnt+=1
        else:
            x,y=(x-1)%n,(y+1)%n
            l[y][x]=cnt
            cnt+=1
    for i in range(n):
        print ''.join(map(lambda s:str(s).rjust(4),l[i]))

exit()

n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
