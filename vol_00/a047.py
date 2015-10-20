#!/usr/bin/env python
# -*- coding: UTF-8 -*-

l=[1,0,0]
while 1:
    try:
        a,b=map(str,raw_input().split(","))
        l[ord(a)-65],l[ord(b)-65]=l[ord(b)-65],l[ord(a)-65]
    except:
        break
print chr(l.index(1)+65)
