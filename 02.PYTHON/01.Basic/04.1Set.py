
#INITIALISATION OF SET

s={1,2,3,7,8,10,10,10}
print(s)
print(10 in s)
#we can't access the specific element in set

l=list(range(10))
s=set(range(10))
print(l)
print(s)
print(l.__sizeof__())
print(s.__sizeof__())

#SET METHODS
print('\nSet Methods')
a={1,3,5}
b={1,2,3,4,5}
print(a.issubset(b))
print(a.issuperset(b))

print('\nUnion')
c1=a.union(b)
c2=a|b
print(c1,c2)

print('\nIntersection')
c1=a.intersection(b)
c2=a&b
print(c1,c2)

print('\nDifference')
c1=b.difference(a)
c2=b-a
print(c1,c2)