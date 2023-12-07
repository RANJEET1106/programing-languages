#include <iostream>
using namespace std;

//inheritance is that we can derive the different class from the base class
//we can access the member function and data members of the base class from the drived class

class parentClass
{
    public:
    int age;
    void func1()
    {
        cout<<"Function Inside the Base Class"<<endl;
    }
};

class derivedClass:public parentClass//creating derived class
{
    public:
    int weight;
    void func2()
    {
        cout<<"Function Inside the Derived Class"<<endl;
    }
};

class parentClass1
{
    public:
    void func1()
    {
        cout<<"Function Inside Base Class 1"<<endl;
    }
};

class derivedClass1:public parentClass,public parentClass1
{

};

int main()
{
    derivedClass obj1;
    obj1.weight=55;
    obj1.age=32;//accessing the data member of parent class through the derived class

    cout<<obj1.weight<<endl;
    cout<<obj1.age<<endl;
    cout<<endl;

    obj1.func1();
    obj1.func2();//accessing the member function of parent class through the derived class
    cout<<endl;
    
    //we can't access the private member of the base class through the derived class
    //access level of the function of base class in the derived class depends on 
    //access specifier used in the base class and access specifier sed while deriving class
    //it takes the max prority value among the both
    //priority order private > protected > public

//INHERITANCE AMBIGUITY

    //when two or more parent class have function with the same name
    //we can't directly call the function we need to use acess specifier
    derivedClass1 obj;
    obj.parentClass::func1();
    obj.parentClass1::func1();
}