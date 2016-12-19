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
#l=map(int,raw_input().split())
#ans=chk=0
ans=['A','B','C','D','E','F','G']
def sol(x):
    for i in range(8):
        for j in range(8):
            if i<7 and j<7:
                if x[i][j]=='1' and x[i+1][j]=='1' and x[i][j+1]=='1' and x[i+1][j+1]=='1':
                    return 0
            if i<5:
                if x[i][j]=='1' and x[i+1][j]=='1' and x[i+2][j]=='1' and x[i+3][j]=='1':
                    return 1
            if j<5:
                if x[i][j]=='1' and x[i][j+1]=='1' and x[i][j+2]=='1' and x[i][j+3]=='1':
                    return 2
            if i<6 and 0<j:
                if x[i][j]=='1' and x[i+1][j]=='1' and x[i+1][j-1]=='1' and x[i+2][j-1]=='1':
                    return 3
            if i<7 and j<6:
                if x[i][j]=='1' and x[i][j+1]=='1' and x[i+1][j+1]=='1' and x[i+1][j+2]=='1':
                    return 4
            if i<6 and j<7:
                if x[i][j]=='1' and x[i+1][j]=='1' and x[i+1][j+1]=='1' and x[i+2][j+1]=='1':
                    return 5
            if i<7 and 0<j<7:
                if x[i][j]=='1' and x[i][j+1]=='1' and x[i+1][j]=='1' and x[i+1][j-1]=='1':
                    return 6


while 1:
    l=[]
    try:
        for i in range(8):
            l.append(raw_input())
        print ans[sol(l)]
        raw_input()
    except:
        break
#end = time.clock()
#print end - start
