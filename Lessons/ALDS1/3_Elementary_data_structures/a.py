#!/usr/bin/env python
# -*- coding: UTF-8 -*-
import time
import sys
import io
import re
import math
import itertools
#sys.stdin=file('input.txt')
#sys.stdout=file('output.txt','w')
#10**9+7
mod=1000000007
#mod=1777777777
pi=3.141592653589
xy=[(1,0),(-1,0),(0,1),(0,-1)]
bs=[(-1,-1),(-1,1),(1,1),(1,-1)]
#start = time.clock()
l=map(str,raw_input().split())
chk=[]
op='-+*'
while len(l):
    k=l.pop(0)
    if k in op:
        b=chk.pop()
        a=chk.pop()
        chk.append(str(eval(a+k+b)))
    else:
        chk.append(k)
print chk[0]

#end = time.clock()
#print end - start
