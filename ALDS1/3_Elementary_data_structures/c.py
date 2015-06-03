#!/usr/bin/env python
# -*- coding:utf-8 -*-
#from __future__ import print_function
#import time
import sys
import collections
n=int(raw_input())
ans=collections.deque()
while n:
    n-=1
    s=sys.stdin.readline().rstrip().split(' ')
    if s[0][0]=='i':
        ans.appendleft(s[1])
    elif s[0][-3]=='r':
        ans.popleft()
    elif s[0][-3]=='a':
        ans.pop()
    else:
        try:
            ans.remove(s[1])
        except:
            pass
sys.stdout.write(' '.join(ans))
print




#while i < 10000:
#    time.sleep(1)
#    i+=1
#print i
