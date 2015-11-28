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
#n=int(raw_input())
#n,k=map(int,raw_input().split())

while 1:
    try:
        l=map(int,raw_input().split(','))
        l.sort()
        if l.count(l[2])==4:
            print 'four card'
        elif len(set(l))==2:
            print 'full house'
        elif l[0]==(l[1]-1)==(l[2]-2)==(l[3]-3)==(l[4]-4) or  (l[0]+9)==(l[1])==(l[2]-1)==(l[3]-2)==(l[4]-3):
            print 'straight'
        elif l.count(l[2])==3:
            print 'three card'
        elif len(set(l))==3:
            print 'two pair'
        elif len(set(l))==4:
            print 'one pair'
        else:
            print 'null'
    except:
        break
ans=chk=0
#end = time.clock()
#print end - start
