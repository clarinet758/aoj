#!/usr/bin/env python
# -*- coding: UTF-8 -*-

l=[0]*101
while 1:
    try:
        n=int(raw_input())
        l[n]+=1
    except:
        break
chk=max(l)
for i,j in enumerate(l):
    if j==chk:
         print i
