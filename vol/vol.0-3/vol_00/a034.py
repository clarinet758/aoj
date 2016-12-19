#!/usr/bin/env python
# -*- coding: UTF-8 -*-


while 1:
    try:
        l=map(int,raw_input().split(','))
        v2=l.pop()
        v1=l.pop()
        p=v1*float(sum(l))/(v1+v2)
        for i in range(10):
            p-=l[i]
            if p<=0:
                print i+1
                break

    except:
        break
