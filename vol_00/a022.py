#!/usr/bin/env python
# -*- coding: UTF-8 -*-


while 1:
    n=int(raw_input())
    if n==0:
        break
    a,dp=[],[]
    for i in range(n):
        a.append(int(raw_input()))
    ans=a[0]
    for i in range(n):
        tmp=0
        for j in range(i,n):
            tmp+=a[j]
            ans=max(ans,tmp)
    print ans
