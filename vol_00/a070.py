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
#memo cjoedwio 878118
K=1024
N=331
R=range(K)
B=[1,2,4,8,16,32,64,128,256,512]
C=[0]*K
D=[[0 for i in range(N)]for j in R]

def init():
    global C,D
    for i in R:
        s=format(i,'b')
        n=s.count('1')
        C[i]=n
        if n==1:
            D[i][B.index(i)]=1
        else:
            for j in range(len(s)):
                if s[-j-1]=='1':
                    dp=n*j
                    i2=i-B[j]
                    for k in range(N-dp):
                        D[i][k+dp]+=D[i2][k]
    return

init()
while 1:
    try:
        n,s=map(int,raw_input().split())
        x=0
        if s<N:
            x=sum([D[i][s] for i in R if C[i]==n])
        print x
    except:
        break

exit()
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
