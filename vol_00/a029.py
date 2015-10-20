#!/usr/bin/env python
# -*- coding: UTF-8 -*-

l=map(str,raw_input().split())
cnt={}
w=ans=""
for i in l:
    if len(i)>len(w):
        w=i
    if cnt.has_key(i):
        cnt[i]+=1
    else:
        cnt[i]=1
t=0
for i in cnt:
    if cnt[i]>t:
        t=cnt[i]
        ans=i
print ans,w
