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

n=int(raw_input())
for h in range(n):
    tmp=raw_input()
    for a in range(26):
        if gcd(a,26)!=1:
            continue
        for b in range(26):
            s=''
            for q in tmp:
                if q.isalpha():
                    s+=chr((((ord(q)-97)*a+b)%26)+97)
                else:
                    s+=q
            if 'that' in s or 'this' in s:
                print s


ans=chk=0
#end = time.clock()
#print end - start
