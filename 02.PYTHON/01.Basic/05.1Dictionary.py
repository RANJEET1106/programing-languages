
import random as ran
#INITIALISING THE DICTIONARY
#each key is assighned to the specific value
d={}
d['abc']=9898989898
d['xyz']=8787878787
d['pqr']=7676767676

print(d)
print(d['xyz'])

l=[]
for i in range (10000):
    l.append(ran.randint(1,1000))
s=set(l)

#Finding max occured int in l
max=0
ans=[]
d={}
for x in s:
    d[x]=0
for x in l:
    d[x]+=1
    if(d[x]>max):
        ans=[]
        max=d[x]
        ans.append(x)
    if(d[x]==max):
        ans.append(x)
print(ans)
print(max)
print()
#dictionary with value as list

d={}
d['abc']=[93,99,95]
d['xyz']=[74,63,82]
d['pqr']=[81,66,90]

print(d)
print(d['abc'])
print(d['abc'][0])

#ITERATING IN DICTIONARY

print('Iterating in Dictionary ')
for key in d:
    print(key,d[key])

#DICTIONARY METHODS

print('\nDictionary Methods ')
print(d.keys())
print(d.values())
print(d.items())#Every element of list is tuple
