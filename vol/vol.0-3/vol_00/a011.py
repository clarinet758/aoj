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
#start = time.clock()
w=int(raw_input())
l=range(w+1)
n=int(raw_input())
for i in range(n):
    x,y=map(int,raw_input().split(','))
    l[x],l[y]=l[y],l[x]
for i in range(1,w+1):
    print l[i]
ans=chk=0
#end = time.clock()
#print end - start
