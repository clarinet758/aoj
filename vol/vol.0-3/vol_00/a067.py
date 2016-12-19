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

def sol(l,a,b):
    q=[[a,b]]
    while len(q):
        chk=q.pop()
        for y,x in xy:
            try:
                t1,t2=chk[0]+y,chk[1]+x
                if l[t1][t2]==1 and 0<=t1<12 and 0<=t2<12:
                    q.append([t1,t2])
                    l[t1][t2]=0
            except:
                pass
    return l
while 1:
    l=[]
    try:
        for i in range(12):
            l.append([int(x) for x in raw_input()])
        ans=0
        for i in range(12):
            for j in range(12):
                if l[i][j]==1:
                    l[i][j]=0
                    ans+=1
                    l=sol(l,i,j)
        print ans
        raw_input()
    except:
        break
exit()
n=int(raw_input())
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
