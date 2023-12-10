#CREATING THE FILE
f=open('09.0mytext.txt','w')

#WRITING DATA TO FILE
f.write("ABCXYZ ")
f.write("yourname ")
f.write("python ")
f.write("INDIA ")
f.close()


#READING FROM THE FILE
x=open("09.0mytext.txt","r")
s=x.read()
print(s)

#MORE ON FILE

f=open("09.0newfile.txt","w")
f.write("This is the first line\n")
f.write("This is the second line\n")
f.close()

f=open("09.0newfile.txt","r")
s=f.read()
print(s)
f.close()

#r=read only mode
#w=write only mode
#a=append only mode
f=open("09.0newfile.txt","r")
print(f.readline())
print(f.readline())
f.close()

#Tips for big file
f=open("09.0newfile.txt","r")
s=0
while(s!=''):
    s=f.readline()
    print(s)



