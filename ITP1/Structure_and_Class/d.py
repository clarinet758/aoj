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
ans=chk=0
a=[0,2,5,3]
b=[0,1,5,4]
c=[1,2,4,3]

def rolling(word,dice):
    if word=='S':
        dice[0],dice[1],dice[5],dice[4]=dice[4],dice[0],dice[1],dice[5]
    elif word=='N':
        dice[0],dice[1],dice[5],dice[4]=dice[1],dice[5],dice[4],dice[0]
    elif word=='W':
        dice[0],dice[2],dice[5],dice[3]=dice[2],dice[5],dice[3],dice[0]
    else:
        dice[0],dice[2],dice[5],dice[3]=dice[3],dice[0],dice[2],dice[5]
    return dice

def sortdice(dice1,dice2,p,q,r):
    for i in range(4):
        dice1[p[0]],dice1[p[1]],dice1[p[2]],dice1[p[3]]=dice1[p[1]],dice1[p[2]],dice1[p[3]],dice1[p[0]]
        for j in range(4):
            dice1[q[0]],dice1[q[1]],dice1[q[2]],dice1[q[3]]=dice1[q[1]],dice1[q[2]],dice1[q[3]],dice1[q[0]]
            for k in range(4):
                dice1[r[0]],dice1[r[1]],dice1[r[2]],dice1[r[3]]=dice1[r[1]],dice1[r[2]],dice1[r[3]],dice1[r[0]]
                if dice1==dice2:
                    print 'No'
                    exit()
    return 0
n=int(raw_input())
l=[]
for i in range(n):
    l.append(map(int,raw_input().split()))
for i in range(0,n-1):
    for j in range(i+1,n):
        sortdice(l[i],l[j],a,b,c)
print 'Yes'
