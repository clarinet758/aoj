#!/usr/bin/env python
# -*- coding: UTF-8 -*-

t=h=0
while 1:
    try:
        a,b,c=map(int,raw_input().split(","))
        if a==b:
            h+=1
        elif c**2==a**2+b**2:
            t+=1
    except:
        break
print t
print h
