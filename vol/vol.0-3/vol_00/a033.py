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

def sol(a):
    b=c=0
    for i in a:
        if i>b:
            b=i
        elif i>c:
            c=i
        else:
            return 0
    return 1
n=int(raw_input())
for i in range(n):
    l=map(int,raw_input().split())
    print 'YES' if sol(l) else 'NO'
#end = time.clock()
#print end - start
