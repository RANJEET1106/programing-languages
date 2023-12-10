#IDENTIFYING TYPE OF VERIABLE

print('\n\nIdentifying Type of Veriable')

n=1_000_000
print(n) #prints the value of variable
print(type(n)) #prints the type of veriable

r=10.7;print(r,type(r))

s='abcdefg';print(s,type(s))

#CHANGING THE TYPES OF VARIABLE

print('\nChanging the Types of Veriable')
n=float(n)#n is converted from int to float
print(n,type(n))

r=int(r)#n is converted from float to int
print(r,type(r))

f=float('5.3')# 5.3 is converted from string to float
print(f,type(f))

s=str(5.3)# 5.3 is converted from float to string
print(s,type(s))

a=bool(10)#int to bool
#true for all non zero flotes or int
print(a,type(a))

a=bool(0.0)#false for 0 or 0.00
print(a,type(a))
print()
