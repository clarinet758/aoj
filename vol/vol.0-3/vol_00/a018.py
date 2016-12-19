#!/usr/bin/env python
# -*- coding: UTF-8 -*-

l=map(int,raw_input().split())
l.sort()
for i in l[::-1]:
    print i,
print
#end = time.clock()
#print end - start
