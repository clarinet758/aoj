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
while 1:
    try:
        x1,y1,x2,y2,x3,y3,xp,yp=map(float,raw_input().split())
        print (x2-x1)*(y2-yp)-(y2-y1)*(x2-xp),(x3-x2)*(y3-yp)-(y3-y2)*(x3-xp),(x1-x3)*(y1-yp)-(y1-y3)*(x1-xp)
        print 'YES' if ((x2-x1)*(y2-yp)-(y2-y1)*(x2-xp)>0)==((x3-x2)*(y3-yp)-(y3-y2)*(x3-xp)>0)==((x1-x3)*(y1-yp)-(y1-y3)*(x1-xp)>0) else 'NO'
    except:
        break

ans=chk=0
#end = time.clock()
#print end - start
