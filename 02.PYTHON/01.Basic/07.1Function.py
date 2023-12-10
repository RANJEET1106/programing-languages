
import random as ran

#function to initialise 
def initialize_mat(row,col=-1):
    ans=[]
    if col<0:
        col=row
    for i in range(row):
        temp=[]
        for j in range(col):
            temp.append(0)
        ans.append(temp)
    return ans

def generate_mat(row,col=-1,lb=1,ub=1000):
    ans=[]
    if col<0:
        col=row
    for i in range (row):
        temp=[]
        for j in range (col):
            temp.append(ran.randint(lb,ub))
        ans.append(temp)
    return ans

#function for sorting

def list_min(l):
    min=l[0]
    for i in l:
        if i<min:
            min=i
    return min
def newSort(l):
    x=[]
    while(len(l)>0):
        mini=list_min(l)
        x.append(mini)
        l.remove(mini)
    return x

l=[]
for i in range(100):
    l.append(ran.randint(1,1000))
print("Sorted list is ",newSort(l))
print('\n')

#Function for multiplication of matrix

def mat_multi(a,b):
    n=len(a)
    ans=initialize_mat(n)
    for i in range(n):
        for j in range(n):
            for k in range(n):
                ans[i][j]+=a[i][k]*b[k][j]
    return ans

n=int(input("Enter the dim of matrix "))
a=generate_mat(n)
b=generate_mat(n)
print(a)
print(b)
print("Multiplication of Matrices a and b is ",mat_multi(a,b))


#ARGUMENTS

print('\nArguments of Function')
def add(c,a=10,b=50):#a nad b are not necessary parameter
    return(a+b-c)

print(add(a=20,b=30,c=40))
print(add(20,30,40))
print(add(40))#this argument is assighned only to c and a and b attain their default value
print(add(40,10))#this arguments are assigned to c and a while b attain its default value
print(add(40,b=10,a=50))

#SCOPE OF VARIABLE

print('\nScope of Variable')
def myFunction(x):#Function creates new copy of variable x
    x=x*2
    print("Value of X in function is ",x)

x=5
print("Value of X before functon call ",x)
myFunction(x)
print("Value of X after functon call ",x)

#method to update x in the function without making copy of it 

print('\nMethod to update variable inside the function')
def myFunction():
    global x
    x=x*2
    print("Value of X in function is ",x)

x=5
print("Value of X before functon call ",x)
myFunction()
print("Value of X after functon call ",x)


