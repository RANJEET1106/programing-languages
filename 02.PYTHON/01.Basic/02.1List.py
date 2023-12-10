
#INITIALISING THE LIST

print('\nInitialising the List')
l=[1,7,4,2,100]
print(l)


#LIST OF LISTS

print('\nList of Lists')
l=[]
l.append(1)
l.append(2)
l.append(3)
print(l)

x=[]
x.append(l)
print(x)
m=[10,20,30]
x.append(m)
print(x)

t=[]
t.append(x)
print(t)
t.append([100,101,102])
print(t)
print()

print(t[0])
print(t[0][0])
print(t[0][0][2])


#CONCATINATION OF LIST

print('\nConcatination of List')
l1=[1,2,3]
l2=[10,20,30]
l12=l1+l2
l21=l2+l1
print(l12)
print(l21)

#MULTIPLICATION OPERATOR

print('\nMultiplication Operator')
l1=[0]*10
l2=[1,2,3]*5
print(l1)
print(l2)

#LOGICAL OPERATOR

print('\nLogical Operator')
l1=[1,2,3]
l2=[1,2,3]
l3=[1,3,2]
print(l1==l2)
print(l2<l3)

#UPDATING ELEMENT

print('\nUpdating Element')
x=5
y=x
x=10
print(x,y)

l1=[1,2,3]
l2=l1#computer adds one more name to the same memory location
l1[0]=100
print(l1,l2)
#l1 and l2 are basically at the same location just with different names

l1=[1,2,3]
l2=list(l1)
l3=l1[:]
l4=l1.copy()
l5=l1

print(l1 is l2)
print(l1 is l3)
print(l1 is l4)
print(l1 is l5)

#PASSIG LIST ASS AN ARGUMENT TO THE FUNCTION

print('\nPassing list as a argument in function ')
def add(x):
    x.append(1)
    return x
x=[5]
print(add(x))
print(x)

#LIST METHODS

print('\nList Methods ')
l=[1,2,3]

l.append(4)
print(l)

l.remove(2)#remove the first occurance of the element
print(l)

x=l.copy()
print(x,l)

l.insert(2,9)#2 is index and 9 is value
print(l)

l.pop(2)
print(l)

l=[2,6,1,50,3,7,5]

l.sort()
print(l)

l.reverse()
print(l)

print(l.index(1))#Return the index of first occurance elese give the error

