#!/usr/bin/env python
# -*- coding: UTF-8 -*-

while 1:
    try:
        ans=0
        for i,j in enumerate(bin(int(raw_input()))[::-1]):
            if j=="1":
                print 2**i,
        print
    except:
        break
