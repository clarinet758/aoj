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

m=[4,1,4,1,2,1,2,1]
l=[]
while 1:
    try:
        c=map(int,raw_input().split())
        cnt=[0]*8
        for i in range(8):
            chk=[m[(i+x)%8] for x in range(8)]
            l.append(chk)
            for j in range(8):
                if c[j]>chk[j]:
                    cnt[i]+=c[j]-chk[j]
        ans=[]
        for i in range(8):
            if cnt[i]==min(cnt):
                ans.append(int(''.join(map(str,l[i]))))
        ans.sort()
        for i in str(ans[0]):
            print i,
        print
    except:
        break
exit()
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start