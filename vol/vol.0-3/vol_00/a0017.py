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

def sol(l):
    n=1
    while n<27:
        ans=[]
        for i in l:
            x=''
            for j in i:
                s=ord(j)+n
                if s>=123:
                    s-=26
                if s<97:
                    s=46
                x+=chr(s)
            ans.append(x)
        if 'that' in ans or 'thet.' in ans or 'this' in ans or 'this.' in ans or 'the' in ans or 'the.' in ans:
            print ' '.join(ans)
            break
        n+=1

while 1:
    try:
        w=map(str,raw_input().split())
        sol(w)
    except:
        break
#end = time.clock()
#print end - start
