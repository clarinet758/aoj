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

def rotate(p,comm):
    if comm==0:
        p[0],p[1],p[2],p[27],p[28],p[29]=p[27],p[28],p[29],p[0],p[1],p[2]
        p[14],p[15]=p[15],p[14]
        p[18],p[20]=p[20],p[18]
    elif comm==1:
        p[2],p[5],p[8],p[21],p[24],p[27]=p[21],p[24],p[27],p[2],p[5],p[8]
        p[11],p[18]=p[18],p[11]
        p[12],p[14]=p[14],p[12]
    elif comm==2:
        p[6],p[7],p[8],p[21],p[22],p[23]=p[21],p[22],p[23],p[6],p[7],p[8]
        p[12],p[17]=p[17],p[12]
        p[9],p[11]=p[11],p[9]
    elif comm==3:
        p[0],p[3],p[6],p[23],p[26],p[29]=p[23],p[26],p[29],p[0],p[3],p[6]
        p[9],p[20]=p[20],p[9]
        p[15],p[17]=p[17],p[15]

def all_eq(A,left,right):
    return all(A[i]==A[left] for i in xrange(left,right))
def is_correct(p):
    return all_eq(p,9,12) and all_eq(p,12,15) and all_eq(p,15,18) and all_eq(p,18,21) and all_eq(p,0,9) and all_eq(p,21,30)

ans=8
def dfs(p,cnt,f):
    global ans
    if ans<=cnt:
        return
    if is_correct(p):
        ans=cnt
        return
    for k in xrange(4):
        if ans<=cnt+1:
            break
        if k==f:
            continue
        rotate(p,k)
        dfs(p,cnt+1,k)
        rotate(p,k)
n=input()
for _ in xrange(n):
#n=int(raw_input())
    p=map(int,raw_input().split())
    ans=8
    dfs(p,0,-1)
    print ans

exit()
n,k=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
