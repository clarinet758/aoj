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
#"memo roiti 899125"
def wall(grid,x,y,d):
    if d==0:
        return x<4 and grid[y*2][x]=='1'
    if d==1:
        return y<4 and grid[y*2+1][x]=='1'
    if d==2:
        return x>0 and grid[y*2][x-1]=='1'
    if d==3:
        return y>0 and grid[y*2-1][x]=='1'

def move(x,y,d):
    if d==0:
        return x+1,y,'R'
    if d==1:
        return x,y+1,'D'
    if d==2:
        return x-1,y,'L'
    if d==3:
        return x,y-1,'U'

ans=''
x=y=d=0
grid=[raw_input() for i in range(9)]
while x or y or d < 2:
    d=(d+3)%4
    while not wall(grid,x,y,d):
        d=(d+1)%4
    x,y,c=move(x,y,d)
    ans=ans+c
print ans

n=int(raw_input())
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
