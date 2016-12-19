#!/usr/bin/env python
# -*- coding: UTF-8 -*-

ans=["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
c=[31,29,31,30,31,30,31,31,30,31,30,31]
while 1:
    a,b=map(int,raw_input().split())
    if a==0:
        break
    t=3
    for i in range(a-1):
        t+=c[i]
    t+=b
    print ans[(t-1)%7]
