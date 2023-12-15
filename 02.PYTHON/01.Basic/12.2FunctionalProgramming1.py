#ITERATOR
print("\nIterator")
roll_no=[1,2,3,4,5,6,7,8,9,10]

buffer=iter(roll_no) #creating the iterator

#iterator takes the address of elemnt
print(next(buffer))
print(next(buffer))
print(next(buffer))

#GENERATOR
print("\nGenerator")
def squareCube(limit):
    x=0
    while(x<limit):
        yield x*x
        yield x*x*x
        x+=1

a=squareCube(5)

print(next(a),next(a))
print(next(a),next(a))
print(next(a),next(a))
print(next(a),next(a))

#INLINE FUNCTIONS
print("\nInline Fuction")
a=100
b=20
c=1000

small=a if a<b else b if a>b else c
print(small)

a=5
while(a>=0): print(a,end=" ");a-=1
print()

'''
newlist=[]
for i in roll_no;
    if i%2==0:
        newlist.append(i//2)
'''
newlist=[i//2 for i in roll_no if i%2==0]
print(newlist)

#LAMBDA FUNCTION
print("\nLambda Function")

add=lambda x,y: x+y
sub=lambda x,y: x-y
print(add(20,10))
print(sub(20,10))

#ENUMERATION
print("\nEnumeration")
char=['A','B','C','D','E','F']
for ch in enumerate(char):
    print(ch)

#ZIPPING
print("\nZipping")
num=[1,2,3,4,5,6,7]

print(list(zip(char,num)))
print(dict(zip(char,num)))

#MAPPING
print("\nMapping")
a=[10,20,30,40,50,60]
b=[5,10,15,20,25,30]

def sub(x,y):
    return x-y
c=map(sub,a,b)
print(list(c))

from math import sqrt
a=[25,-16,9,81,-100]

def square_root(n):
    return sqrt(n)

def is_positive(n):
    if n>=0:
        return n

c=map(square_root,filter(is_positive,a))
print (list(c))
    
