#!/usr/bin/env python
# -*- coding: UTF-8 -*-

n=int(raw_input())

while n:
    n-=1
    x1,y1,x2,y2,x3,y3,x4,y4=map(float,raw_input().split())
    print 'YES' if abs((y3-y4)*(x1-x2)-(y1-y2)*(x3-x4))< 1e-10 else 'NO'
