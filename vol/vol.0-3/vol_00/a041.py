#!/usr/bin/env python
# -*- coding: UTF-8 -*-

#879080 leafmoon
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
def dfs(a):
    if len(a)<2:
        yield (a[0],str(a[0]))
    for i in range(len(a)-1):
        for l in dfs(a[:i+1]):
            for r in dfs(a[i+1:]):
                yield (l[0]+r[0],'(%s+%s)'%(l[1],r[1]))
                yield (l[0]-r[0],'(%s-%s)'%(l[1],r[1]))
                yield (l[0]*r[0],'(%s*%s)'%(l[1],r[1]))
def sol(a):
    for e in itertools.permutations(a):
        for n,s in dfs(e):
            if n==10:
                print(s)
                return 1
    pass
                
op='-+*'
while 1:
    a=map(int,raw_input().split())
    if a==[0,0,0,0]:
        break
    if not sol(a):
        print 0
ans=chk=0
#end = time.clock()
#print end - start
