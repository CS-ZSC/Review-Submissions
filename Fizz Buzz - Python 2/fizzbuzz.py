# -*- coding: utf-8 -*-
"""
Created on Tue Jan 24 18:40:50 2017

@author: mint
"""

for i in range(1,101):
    if i % 3 == 0:  # Divisible by 3
        print "Fizz"
    elif i % 5 == 0:  # Divisible by 5
        print "Buzz"
    elif i % 5 and i % 3 == 0:   # Divisible by both 3 and 5
        print "FizzBuzz"
    else:
        print i
