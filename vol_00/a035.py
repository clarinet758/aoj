#!/usr/bin/env python
# -*- coding: UTF-8 -*-


def sol(a1,b1,a2,b2,a3,b3):
    return (a3-a2)*b1-(b3-b2)*a1+a2*b3-a3*b2
while 1:
    try:
        x1,y1,x2,y2,x3,y3,x4,y4=map(float,raw_input().split(','))
        if sol(x1,y1,x2,y2,x4,y4)*sol(x3,y3,x2,y2,x4,y4)<0 and sol(x4,y4,x1,y1,x3,y3)*sol(x2,y2,x1,y1,x3,y3)<0:
            print 'YES'
        else:
            print 'NO'

    except:
        break
