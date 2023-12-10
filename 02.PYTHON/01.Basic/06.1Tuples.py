import string

#INITIALISING THE TUPLE

print('\nInitialising the Tuple ')
t=(2,7,18,64,101,108,65)
print(t)
print(t[0])
#tuple can't be changed

s=string.ascii_letters
alpha=tuple(list(s))
print(alpha)

l=list(range(10))
t=tuple(range(10))
print(l)
print(t)
print(l.__sizeof__())
print(t.__sizeof__())

#USE OF TUPLE

print('\nUse of Tuple ')

t=1,2,3 #Packing
print(t,type(t))

x,y,z=t #Unpacking
print(x,y,z)

print('\nSwap Function')
x=5
y=10
x,y=y,x
print(x,y)

#TUPLE WITH SINGLE ELEMENT

print('\nTuple with single element')

l=[10]
print(l,type(l))

t=(10)
print(t,type(t))

t=(10,)
print(t,type(t))

#TUPLE OF LISTS

print('\nTuple of Lists')
t=([1,2],['a','b'])
print(t)

t[0][0]=10 # we can't modify the tuple bt we can modify the list inside the tuple
print(t)
print()

t1=(1,2,3) #Hashable
t2=([1,2,3],) #Non Hasheble
#if elements inside the tuple are also immutable then tuple is hasheble otherrwise Non-hashable