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
#memo roiti 902516

import itertools
ref={5:1,9:2,13:3}
dx=[0,0,1,0,-1,1,1,-1,-1,2,0,-2,0]
dy=[0,-1,0,1,0,-1,1,1,-1,0,2,0,-2]

def isOn(x,y):
    return 0<=x<10 and 0<=y<10

def minus(C,x,y,size):
    for i in range(size):
        C[y+dy[i]][x+dx[i]]-=1
def plus(C,x,y,size):
    for i in range(size):
        C[y+dy[i]][x+dx[i]]+=1

def canMinus(C,x,y,size):
    return all([isOn(x+dx[i],y+dy[i]) and C[y+dy[i]][x+dx[i]]>0 for i in range(size)])

def findAns(C,drops,sp):
    if len(drops)==0:
        return []
    for i in range(sp,100):
        if C[i/10][i%10]>0:
            break
        sp+=1
    for size in set(drops):
        for i in range(size):
            sx,sy=sp%10+dx[i],sp/10+dy[i]
            if isOn(sx,sy) and C[sy][sx]>0:
                if canMinus(C,sx,sy,size):
                    minus(C,sx,sy,size)
                    drops.remove(size)
                    ans=findAns(C,drops,sp)
                    if ans!=False:
                        ans.append([sx,sy,size])
                        return ans
                    drops.append(size)
                    plus(C,sx,sy,size)
    return False
        
n=int(raw_input())
C=[map(int,raw_input().split()) for i in range(10)]
sm=sum([sum(C[i]) for i in range(10)])
dropList=[list(a) for a in itertools.combinations_with_replacement([0,13,9,5],n) if sum(a)==sm]
for drops in dropList:
    ans=findAns(C,drops,0)
    if ans!=False:
        break
for a in ans:
    print a[0],a[1],ref[a[2]]
exit()
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
