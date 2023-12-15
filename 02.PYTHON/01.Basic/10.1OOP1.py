#creating the class
class Student:
    roll_no=0#default values of veriables
    name=None

    count=0

    def __init__(self,roll_no=0,name=None): #Parameterized Constructor
        self.roll_no=roll_no
        self.name=name
    
    def display(self):
        print(self.roll_no, self.name)

s0=Student() #creating the object
s0.roll_no=0 #asssigning the values to the class members
s0.name="ABCXYZ"
print(s0.roll_no, s0.name)#accessing the value of class member

s1=Student()
print(s1.roll_no, s1.name) #print the default value

s2=Student()
Student.count+=1
s2.roll_no=2
s2.name="DEF"
print(s2.roll_no , s2.name)

s3=Student(0,'EFG') #giving parameters to the object
Student.count+=1
s3.display()

print(Student.count)#Count object belongs to class and not to the object so only one copy is created
