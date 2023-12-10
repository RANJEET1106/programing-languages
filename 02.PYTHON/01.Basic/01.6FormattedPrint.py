
#TYPE 1
print()
for i in range (11):
    print(i,end=' ')
print()

#TYPE 2
d=10
m=5
y=2021
print("Today's date is",end=' ')
print(d,m,y,sep='/')#we can use any seperator

#TYPE 3
num=3
for i in range (1,11):
    print(f"{num}*{i}={num*i}") # f treat value inside curly braces as variable
print()

for i in range (1,11): 
    print("{0}*{1}={2}".format(num,i,num*i))
print()

#TYPE 4
num=4
for i in range (1,11): 
    print("%d*%d=%d"%(num,i,num*i))#instead of this use formate or f instead of string modulo operator
print()

#TYPE 5
pi=22/7
print(f"Value of PI = {pi}")
print("Value of PI = {0}".format(pi))
print("Value of PI = %f"%(pi))

#if we want value of pi only upto 2 decimals
print(f"Value of PI = {pi:.2f}")
print("Value of PI = {0:.2f}".format(pi))
print("Value of PI = %.2f"%(pi))

#TYPE 6
print("{0}".format(1))
print("{0}".format(11))
print("{0}".format(111))
print("{0}".format(1111))
print("{0}".format(11111))

#if wee want above pattern aligned to the right
print("{0:5d}".format(1))
print("{0:5d}".format(111))
print("{0:5d}".format(1111))
print("{0:5d}".format(11111))