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
def choco(xa,ya,xb,yb,xc,yc,xd,yd): return 1 if abs((yb-ya)*(yd-yc)+(xb-xa)*(xd-xc))<1.e-10 else 0

while 1:
#n=int(raw_input())
    try:
        y,m,d=map(int,raw_input().split())
        if (y<=1868 and m<=9 and d<8) or (y<=1868 and m<=8) or y<=1867:
            print 'pre-meiji'
        elif (y<=1912 and m<=7 and d<30) or (y<=1912 and m<=6) or y<=1911:
            print 'meiji',y-1867,m,d
        elif (y<=1926 and m<=12 and d<25) or (y<=1926 and m<=11) or y<=1925:
            print 'taisho',y-1911,m,d
        elif (y<=1989 and m<=1 and d<8) or y<=1988:
            print 'showa',y-1925,m,d
        else:
            print 'heisei',y-1988,m,d
    except:
        break
exit()
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
