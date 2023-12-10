
#DIFFERENT OPERATIONS ON STRING

print('\nDifferent Operations on String')
s='Coffee'
t='Bread'
print(s+t)
print(s[1:3])# prints the string from index 1 to index 2 both inclusive
print(s[2])# print second index
print(s*5)#it prints string 5 times

#COMPARING STRING

print('\nComparing String')
#compares string letter by letter 
#if first letter of both if they are same then check for next letter
print(s=='Coffee')
print('apple'>'one')
print('four'<'ten')

#NEGATIVE INDEXING IN STRING

print('\nNegative Indexing in String')
print(s[-1])

#LENGTH OF STRING

print('\nLength of String')
print(len(s))
print(len(t))

#SLICING OF STRING

print('\nSlicing of String')
s='this is good'
print(s[8:12])
print(s[8:])
print(s[-4:])
print(s[:4])
print(s[:])
print(s[0:7:3])#third index is the step index
print(s[::-1])#reverse the string

#SUBSTRING OF STRING

print('\nSubstring of String')
s='this is good'
word='is'
print(word in s)
word='great'
print(word in s)
word=' this is good'
print(word in s)

#MULTILINE STRING

print('\nMultiline String')
s='''my name is abc
We are from xyz'''
print(s)

#STRING METHOD
x='pytHoN sTrIng mEthOds'

print('\n\nString Method')
print(x.lower())#converts string into lower case
print(x.upper())#converts string into upper case
print(x.capitalize())#converts the first char to upper case
print(x.title())#converts the first char of each word to upper case
print(x.swapcase())#swap cases of each char
print()

x='Python'
print(x.islower())#returns true if all char are lower case
print(x.isupper())#returns true if all char are upper case
print(x.istitle())#returns true is string follow rule of title
print()

x='123abc'
print(x.isdigit())#returns true if all char are digits
print(x.isalpha())#returns true if all char are alpha
print(x.isalnum())#returns true if all char are alpha numeric
print()

x='-----Python-----'
print(x.strip('-'))#return the trimmed version of the string
print(x.lstrip('-'))#return a left trim of version of string
print(x.rstrip('-'))#return a right trim of version of string
print()

x='Python'
print(x.startswith('P'))#return true if string starts with the specified value
print(x.endswith('N'))#return true if string ends with the specified value
print()

x='Python String Method'
print(x.count('t'))#returns the count of specified value
print(x.index('t'))#returns the index of first appearance of the specified value
x=x.replace('S','s')
x=x.replace('M','m')
print(x)

#PRINTING NEXT LETTER

print('\nPrinting Next Letter')
alpha='abcdefghijklmnopqrstuvwxyz'
s='indian'
t=alpha[(((alpha.index(s[0]))+1)%26)]
print(t)