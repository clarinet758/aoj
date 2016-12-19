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
#"memo roiti 875674"
d={"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}

while 1:
    try:
        n=raw_input()
        t=0
        value=1000
        for i in n:
            if value>=d[i]:
                value=d[i]
                t=t+value
            else:
                t=t-value*2
                value=d[i]
                t=t+value
        print t
    except:
        break
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
