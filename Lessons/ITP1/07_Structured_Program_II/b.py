#!/usr/bin/env python3
# -*- coding: UTF-8 -*-

while 1:
    n,x=map(int,input().split())
    if n==0: break
    ans=0
    for i in range(1,n-1):
        for j in range(i+1,n):
            p=x-i-j
            if j<p<=n: ans+=1
    print(ans)
