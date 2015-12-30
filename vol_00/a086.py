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
#memo roiti 898803
while 1:
    try:
        p=[0]*100
        while 1:
            a,b=map(int,raw_input().split())
            if a==0:
                break
            p[a-1]+=1
            p[b-1]+=1
        if p[0]%2==p[1]%2==1 and sum(filter(lambda x:x%2==1,p[2:]))==0:
            print 'OK'
        else:
            print 'NG'
    except:
        break
exit()
            
n=int(raw_input())

l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
