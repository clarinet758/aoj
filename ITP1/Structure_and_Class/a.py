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
l=map(int,raw_input().split())
n=raw_input()
ans=chk=0


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

for i in n:
    l=rolling(i,l)
print l[0]
