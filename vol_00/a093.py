#!/usr/bin/env python
# -*- coding: UTF-8 -*-

k=0
while 1:
    a,b=map(int,raw_input().split())
    if a==0:
        break
    if k:
        print
    f=0
    k=1
    for i in range(a,b+1):
        if i%400==0 or (i%4==0 and i%100!=0):
            f=1
            print i
    if f==0:
        print "NA"
