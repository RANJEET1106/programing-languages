import random
import time
#Iterative way
def binary_search(l,k):# l is list and k is the key
    begin=0
    end=len(l)-1
    while(end>=begin):
        mid=(begin+end)//2
        if l[mid]<k: begin=mid+1
        elif l[mid]>k: end=mid-1
        else: return mid
    return -1

#Recursive way
def binarySearch(l,k,begin,end):
    while(end>=begin):
        mid=(begin+end)//2
        if(l[mid]==k): return mid
        elif l[mid]>k: return binarySearch(l,k,begin,mid-1)
        else: return binarySearch(l,k,mid+1,end)
    return -1

l=[]
for i in range (10000):
    l.append(random.randint(0,10000))
l.sort()
a=time.time()
print(binary_search(l,7))
b=time.time()
print(b-a)

a=time.time()
print(binarySearch(l,7,0,100))
b=time.time()
print(b-a)

#On average iterative approch takes more time than recursive one