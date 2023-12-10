#shifting letter of file by three each i.e a becpmes d ans so on
import string

def create_encrept_dict():
    l=string.ascii_lowercase
    l=list(l)
    d={}
    for i in range(len(l)):
        d[l[i]]=l[(i+3)%26]
    return d

f=open("09.0newfile1.txt",'r')
g=open('09.0newfile1Encrept.txt','w')
d=create_encrept_dict()

c=f.read(1)
while(c!=''):
    g.write(d[c])
    c=f.read(1)
f.close()
g.close()

g=open('09.0newfile1Encrept.txt','r')
s=g.read()
print(s)
g.close()

f=open("09.0newfile1.txt",'r')
f.seek(5) #takes the cursor to position 5
s=f.read(2)#read the two letters from the position of cursor
print(s)