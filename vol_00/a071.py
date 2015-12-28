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

def bomb(f,x,y):
    rf=f[:][:]
    rf[y][x]=0
    for i in [-3,-2,-1,1,2,3]:
        if 0<=x+i<=7:
            if rf[y][x+i]==1:
                rf=bomb(rf,x+i,y)
        if 0<=y+i<=7:
            if rf[y+i][x]==1:
                rf=bomb(rf,x,y+i)
    return rf

n=int(raw_input())
for data in range(1,n+1):
    raw_input()
    f=[]
    for i in range(8):
        f.append([int(x) for x in raw_input()])
    x=int(raw_input())-1
    y=int(raw_input())-1
       # map(int,raw_input().split())
    f=bomb(f,x,y)
    print "Data %d:"%(data)
    for i in range(8):
        print ''.join(map(str, f[i]))
exit()
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
