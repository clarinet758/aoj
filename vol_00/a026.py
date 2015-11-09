#!/usr/bin/env python
# -*- coding: UTF-8 -*-

l=[[0]*10 for _ in range(10)]

while 1:
    try:
        x,y,s=map(int,raw_input().split(','))
        l[y][x]+=1
        syo=[[0,1],[0,-1],[1,0],[-1,0]]
        chu=[[1,1],[-1,-1],[1,-1],[-1,1]]
        dai=[[0,2],[0,-2],[2,0],[-2,0]]
        for i in syo:
            if 0<=y+i[0]<=9 and 0<=x+i[1]<=9:
                l[y+i[0]][x+i[1]]+=1
        if s>1:
            for i in chu:
                if 0<=y+i[0]<=9 and 0<=x+i[1]<=9:
                    l[y+i[0]][x+i[1]]+=1
        if s>2:
            for i in dai:
                if 0<=y+i[0]<=9 and 0<=x+i[1]<=9:
                    l[y+i[0]][x+i[1]]+=1


    except:
        break

a=b=0
for i in l:
    a+=i.count(0)
    b=max(b,max(i))
print a
print b
