# -*- coding: utf-8 -*-
"""
Created on Tue Jan 24 18:40:50 2017

@author: mint
"""

for i in range(1,101):
    if i%3==0:
        print "fizz"
    elif i%5==0:
        print "Buzz"
    elif i%5 and i%3 ==0:
        print "fizzbuzz"
    else:
        print i
