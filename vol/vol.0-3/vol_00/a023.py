#!/usr/bin/env python
# -*- coding: UTF-8 -*-

n=int(raw_input())
for i in range(n):
    xa,ya,ra,xb,yb,rb=map(float,raw_input().split())
    d=((xa-xb)**2+(ya-yb)**2)**0.5
    if ra+rb<d:
        print 0
    elif ra>=rb:
        print 2 if d+rb<ra else 1
    else:
        print -2 if d+ra<rb else 1
