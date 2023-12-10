# we can import different libraries using import function

print('\n')
import math
print(math.sqrt(9))
print(math.factorial(10))
print(math.pow(10,3))
print('\n')

import random
print(random.random())#generates random number between 0 and 1
print(random.randrange(1,6))#generates int number between 1 and 5 both inclusive

import calendar
print(calendar.month(2006,6))
print(calendar.calendar(2003))

#different methods to import library

from calendar import *#in this type we don't need to define everytime the source library of function
# '*' stads for copy of all library
print(month(2022,9))

import calendar as c
print(c.month(2023,11))

from calendar import month as m
print(m(2023,1))