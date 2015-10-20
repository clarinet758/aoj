#!/usr/bin/env python
# -*- coding: UTF-8 -*-

while 1:
    try:
        i=float(raw_input())
        if i<=48.00:
            print "light fly"
        elif i<=51.00:
            print "fly"
        elif i<=54.00:
            print "bantam"
        elif i<=57.00:
            print "feather"
        elif i<=60.00:
            print "light"
        elif i<=64.00:
            print "light welter"
        elif i<=69.00:
            print "welter"
        elif i<=75.00:
            print "light middle"
        elif i<=81.00:
            print "middle"
        elif i<=91.00:
            print "light heavy"
        else:
            print "heavy"
    except:
        break
