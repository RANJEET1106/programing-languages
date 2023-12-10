
#ASSIGNMENT TO THE VERIABLES

print('\nVariables ')
x,y=3,2
print(x,y)
y,x=x,y
print(x,y)

#DELETING THE VERIABLE

del x

#INCREMENT OPERATOR

count=0
count+=1
print(count)

#ESCAPE CHARACTERS

# '\' is used as escape characters

print('\nEscape Character ')
print('it\'s a beautiful day')
print('We are from \'INDIA\'')
print('my name is abc.\t\tI am from xyz')#\t is used for tab spacing
print('my name is abc.\nI am from xyz')#\n is used as new line character
print()

print("it's a beautiful day")#we don't need escape char when we use ' in a string which is written between " "
print("We are from 'INDIA'")

#CONDITIONAL STATEMENTS

print('\nConditional Statements')
#if else loop indenation is mendatry
age=int(input('Enter the age ->'))
if (age<13): 
    print("you can't watch this movie")
else : 
    print("you can watch movie")

#if elif ladder

age=int(input('Enter the age ->'))
if(age<13):
    print("you can't watch this movie")
elif(age<=18):
    print("you can watch movie under parent guidence")
else:
    print("you can watch movie on your own")

#LOOPS

print('\nLoops')
#while loop
year=int(input("when did India get its independence (year) ?? "))
year=1947
while(year!=1947):
    print("You get this wrong. Enter once again")
    year=int(input())
print("you are absolutely right")

#for loop

for i in range (11):#it don't include 11 loop just run upto 10
    print(i," HELLO WORLD")

for i in range (1,11,2):#third parameter is step
    print(i,end=' ')
print()

for i in range (10,-1,-1):
    print(i)
print()

country='India'
for letter in country:
    print(letter)

#BREAK,PASS,CIONTINUE STATEMENTS

print('\nBreak,Pass,Continue')
#BREAK STATEMENT

#break statement is used to break loop and code comes out of loop
print()
email="xyz123@abc.in"
for i in email:
    if(i=='@'):
        break
    print(i,end='')
print('\n')

#CONTINUE STATEMENT

#continue statement is used to skip code below and continue with the loop
email="xyz123@abc.in"
for i in email:
    if(i=='@'):
        print()
        continue
    print(i,end='')
print('\n')

#PASS STATEMENT

#pass statement is just placeholder
for i in range(11):
    if(i%3==0):
        print(i)
    else:
        pass
