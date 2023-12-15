a=int(input("Enter the Number :"))
b=int(input("Enter the Number :"))

try:
    c=a/b
    print(c) #change this c to something else it will give us the nameError
except ZeroDivisionError:
    print("Invalid Input ,Divisor can not be Zero")
except NameError:
    print("Variable Not Defined")
except: #Default Exception Statement
    print("Something Went Wrong")

finally: #This Block Always Runs Before Terminating the Program
    print("Progam gets Executed Successfully")

a=int(input())
if(a<18):
    raise Exception("You Are Underage, Can not vote") #Gives the error after perticular input and program is terminated