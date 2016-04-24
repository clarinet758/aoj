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
def euclid_dis(x1,y1,x2,y2): return ((x1-x2)**2+(y1-y2)**2)**0.5
def choco(xa,ya,xb,yb,xc,yc,xd,yd): return 1 if abs((yb-ya)*(yd-yc)+(xb-xa)*(xd-xc))<1.e-10 else 0


def game():
    score=out=0
    runner=[0]*3
    while 1:
        t=raw_input()
        if t=='OUT':
            out+=1
            if out==3:
                return score
        elif t=='HOMERUN':
            score+=(1+runner.count(1))
            runner=[0]*3
        elif t=='HIT':
            if runner[2]==1:
                score+=1
                runner[2]=0
            runner=[1,runner[0],runner[1]]

n=int(raw_input())
for i in range(n):
    print game()

#end = time.clock()
#print end - start
