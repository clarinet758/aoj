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
#memo 877768 roiti
pi=3.141592653589
xy=[(1,0),(-1,0),(0,1),(0,-1)]
bs=[(-1,-1),(-1,1),(1,1),(1,-1)]
def gcd(a,b): return a if b==0 else gcd(b,a%b)
def lcm(a,b): return a*b/gcd(a,b)
#start = time.clock()
while 1:
    try:
        a=s=float(raw_input())
        for i in range(2,11):
            if i%2==0:
                a*=2.0
                s+=a
            else:
                a/=3.0
                s+=a
        print s
    except:
        break
#end = time.clock()
#print end - start
