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
def pri(t):
    i=2
    while i**2<=t:
        if t%i==0:
            return 0
        i=i+1
    return 1

l=[]
for i in range(2,50000):
    if pri(i):
        l.append(i)
s=5133
ans={}
for i in range(5132):
    for j in range(i,5133):
        a,b=l[i],l[j]
        if a+b>50000:
            break
        if ans.has_key(a+b):
            ans[a+b]+=1
        else:
            ans[a+b]=1
while 1:
    n=int(raw_input())
    if n==0:
        break
    print ans[n] if ans.has_key(n) else 0
exit()
n=int(raw_input())
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
