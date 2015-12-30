#!/usr/bin/env python
# -*- coding: UTF-8 -*-
import time
import sys
import io
import re
import math
import itertools
import collections
#sys.stdin=file('input.txt')
#sys.stdout=file('output.txt','w')
#10**9+7
mod=1000000007
#mod=1777777777
pi=3.141592653589
xy=[(1,0),(-1,0),(0,1),(0,-1)]
bs=[(-1,-1),(-1,1),(1,1),(1,-1)]
def gcd(a,b): return a if b==0 else gcd(b,a%b)
def lcm(a,b): return a*b/gcd(a,b)
def choco(xa,ya,xb,yb,xc,yc,xd,yd): return 1 if abs((yb-ya)*(yd-yc)+(xb-xa)*(xd-xc))<1.e-10 else 0
#memo roiti 898806
d1 = {" ":"101","'":"000000",",":"000011","-":"10010001",".":"010001","?":"000001","A":"100101","B":"10011010","C":"0101","D":"0001","E":"110","F":"01001","G":"10011011","H":"010000","I":"0111","J":"10011000","K":"0110","L":"00100","M":"10011001","N":"10011110","O":"00101","P":"111","Q":"10011111","R":"1000","S":"00110","T":"00111","U":"10011100","V":"10011101","W":"000010","X":"10010010","Y":"10010011","Z":"10010000",}
d2 = {"00000":"A","00001":"B","00010":"C","00011":"D","00100":"E","00101":"F","00110":"G","00111":"H","01000":"I","01001":"J","01010":"K","01011":"L","01100":"M","01101":"N","01110":"O","01111":"P","10000":"Q","10001":"R","10010":"S","10011":"T","10100":"U","10101":"V","10110":"W","10111":"X","11000":"Y","11001":"Z","11010":" ","11011":".","11100":",","11101":"-","11110":"'","11111":"?"}

while 1:
    try:
        c,dc='',''
        n=raw_input()
        for i in n:
            c+=d1[i]
        if len(c)%5!=0:
            c+='0'*(5-len(c)%5)
        for i in range(0,len(c),5):
            dc+=d2[c[i:i+5]]
        print dc
    except:
        break
exit()
n,k=map(int,raw_input().split())
l=map(int,raw_input().split())
ans=chk=0
#end = time.clock()
#print end - start
