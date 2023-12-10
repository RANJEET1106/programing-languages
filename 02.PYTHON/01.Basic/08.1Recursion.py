import random
#Function to compute the compound interest

print()
def comp(p,n):
    if(n==1):
        return p*1.1
    else:
        return comp(p,n-1)*1.1
print(comp(1000,5))

#check for 0 in list recursively

def check0(l):
    #if the list is empty return false
    if(len(l)==0):
        return 0
    if(l[0]==0):
        return 1
    else:
        return check0(l[1:len(l)])
l=[]
for i in range (100):
    l.append(random.randint(0,100))
print(check0(l))

#Sorting Recursively

def mini(l):
    mini=l[0]
    for x in l:
        if(x<mini):
            mini=x
    return mini

def sort(l):
    if(len(l)==0):
        return l
    m=mini(l)
    l.remove(m)
    return [m]+sort(l)
l2=sort(l)
print(l2)
