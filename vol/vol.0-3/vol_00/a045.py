#!/usr/bin/env python
# -*- coding: UTF-8 -*-
cnt=t=a=0
while 1:
    try:
        x,y=map(int,raw_input().split(","))
        cnt+=1
        t+=x*y
        a+=y
    except:
        break
print t
print int(round((float(a))/cnt))
