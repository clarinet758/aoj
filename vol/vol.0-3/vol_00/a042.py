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
#start = time.clock()
#n=int(raw_input())
#n,k=map(int,raw_input().split())
#l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
def sol():
    dp=[0]*(w+1)
    for i in l:
        for j in range(w-i[1],0,-1):
            if(dp[j]!=0):
                    dp[j+i[1]]=max(dp[j+i[1]],dp[j]+i[0])
        dp[i[1]]=max(dp[i[1]],i[0])
    print "Case %d:"%cnt
    print max(dp)
    print dp.index(max(dp))
cnt=0
while 1:
    w=int(raw_input())
    cnt+=1
    if w==0:
        break
    n=int(raw_input())
    l=[]
    for i in range(n):
        l.append(map(int,raw_input().split(',')))
    sol()

