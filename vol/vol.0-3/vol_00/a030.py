#!/usr/bin/env python
# -*- coding: UTF-8 -*-

import itertools

l=range(10)
while 1:
    n,s=map(int, raw_input().split())
    if n==0:
        break
    cnt=0
    for i in list(itertools.combinations(l,n)):
        if sum(i)==s:
            cnt+=1
    print cnt


