#!/usr/bin/env python
# -*- coding: UTF-8 -*-

l=[0]*4
while 1:
    try:
        a,b=map(str,raw_input().split(","))
        if b=="A":
            l[0]+=1
        elif b=="B":
            l[1]+=1
        elif b=="AB":
            l[2]+=1
        else:
            l[3]+=1
    except:
        break
for i in l:
    print i
