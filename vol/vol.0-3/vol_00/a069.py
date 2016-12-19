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
#memo roiti 886970
while 1:
    n=int(raw_input())
    if n==0:
        break
    m=int(raw_input())
    x=int(raw_input())
    d=int(raw_input())
    D=range(d)
    amida=['' for i in D]
    for i in D:
        amida[i]='0'+raw_input()+'0'
    rroot=[]
    for i in range(d-1,-1,-1):
        if amida[i][x-1]=='1':
            x-=1
        elif amida[i][x]=='1':
            x+=1
        rroot.append(x)
    if m==x:
        print 0
    else:
        root=[]
        for i in D:
            if amida[i][m-1]=='1':
                m-=1
            elif amida[i][m]=='1':
                m+=1
            root.append(m)
        rroot.reverse()
        for i in D:
            if abs(root[i]-rroot[i])==1:
                p=min(root[i],rroot[i])
                if int(amida[i][p-1])+int(amida[i][p+1])==0:
                    print i+1,p
                    break
            if i==d-1:
                print 1
exit()
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
