import random

print()
l=random.sample(list(range(10_000)),1_000)
sum=0
for i in l:
    sum+=i
print("Sum of elements of array is ",sum)
print()

#DOT PRODUCTS OF LIST

l1=random.sample(list(range(10_000)),1_000)
l2=random.sample(list(range(10_000)),1_000)
sum=0
for i in range(len(l1)):
    sum+=l1[i]*l2[i]
print("Dot product of two vector is ",sum)
print()

#ADDITION OF MATRICES

n=int(input("Enter the number of rows and columns ->\n"))
m1=[]
m2=[]
for i in range (n):
    l=random.sample(list(range(10_000)),n)
    m1.append(l)
for i in range (n):
    l=random.sample(list(range(10_000)),n)
    m2.append(l)

ans=[[0]*n]*n
#never initialise 2d array like this ans=[[0]*n]*n
for i in range (n):
    #temp1=[]
    for j in range (n):
        ans[i][j]=m1[i][j]+m2[i][j]
        #temp2=m1[i][j]+m2[i][j]
        #temp1.append(temp2)
    #ans.append(temp1)
print(ans)
print('\n')

#MULTIPLICATION OF MATRIX

ans=[]
for i in range(n):
    temp1=[]
    for j in range(n):
        temp2=0
        for k in range(n):
            temp2+=m1[i][k]*m2[k][j]
        temp1.append(temp2)
    ans.append(temp1)
print(ans)

#another method
ans=[]
for i in range(n):
    temp=[]
    for j in range (n):
        temp.append(0)
    ans.append(temp)

for i in range(n):
    for j in range (n):
        for k in range (n):
            ans[i][j]+=m1[i][k]*m2[k][j]

print(ans)


