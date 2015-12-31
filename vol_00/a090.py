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
#memo cjoedwio 933005
import math,cmath

def f(m):
    c=1j*math.acos(a/2)
    r=cmath.exp(b+c)+p
    s=cmath.exp(b-c)+p
    u=v=2
    for t in A:
        if t in [p,q]:
            continue
        if abs(t-r)-1<1e-6:
            u+=1
        if abs(t-s)-1<1e-6:
            v+=1
    return max(m,u,v)

while 1:
    n=int(raw_input())
    if n==0:
        break
    N=range(n)
    A=[]
    for i in N:
        #x,y=map(float,int(raw_input()))
        x,y=map(float,input())
        A+=[x+1j*y]
    m=1
    for i in N:
        p=A[i]
        for q in A[i+1:]:
            a,b=cmath.polar(q-p)
            b*=1j
            if a<=2:
                m=f(m)
    print m
exit()
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
