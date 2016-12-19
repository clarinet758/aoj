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

def sol(a):
    if len(set(a))==1:
        tmp=a.pop()
        if tmp=='s':
            return ''
        else:
            return tmp
    else:
        return ''
while 1:
    try:
        n=raw_input()
        f=1 
        for i in range(0,7,3):
            if sol(list(n[i:i+3])):
                print sol(list(n[i:i+3]))
                f=0
        for i in range(3):
            if sol(list(n[i]+n[i+3]+n[i+6])):
                print sol(list(n[i]+n[i+3]+n[i+6]))
                f=0
        if f and (sol(list(n[0]+n[4]+n[8])) or sol(list(n[2]+n[4]+n[6]))):
            print sol(list(n[0]+n[4]+n[8]))+sol(list(n[2]+n[4]+n[6]))
            f=0
        if f:
            print 'd'

    except:
        break
#n,k=map(int,raw_input().split())
#l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
