class Person:
    def __init__(self,name,age,temp=None):
        self.name=name
        self.age=age

        self.__temp=temp #Creating Private Attribute with '__"
    
    def display(self):
        print(self.name, self.age,end=" ")

class Student(Person):#Class Student inherits the class Person
    def __init__(self,name,age,marks):
        self.marks=marks
        super().__init__(name,age)

    def display(self):
        super().display()
        print(self.marks)

class Employee(Person):#Class Employee inherits the class Person
    def __init__(self,name,age,salery):
        self.salery=salery
        super().__init__(name,age)

    def display(self):
        super().display()
        print(self.salery)

s=Student('ABC',20,250)
s.display()

e=Employee('XYZ',30,50000)
e.display()