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

def prime_t(t):
    i=2
    while i**2<=t:
        if t%i==0:
            return 0
        i+=1
    return 1
l=[]
for i in range(2,50022):
    if prime_t(i):
        l.append(i)
#print l
while 1:
    try:
        o=y=50000
        n=int(raw_input())
        for i in l:
            if y<n and n<i:
                print y,i
                break
            elif y==n and o<n and n<i:
                print o,i
                break
            o=y
            y=i
        
    except:
        break
ans=chk=0
#end = time.clock()
#print end - start
