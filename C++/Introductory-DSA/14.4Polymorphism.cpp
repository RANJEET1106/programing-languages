#include <iostream>
using namespace std;



class A
{
//COMPILE TIME POLYMORPHISM

    //function overloading:function with same name can be used in multiple ways
    public:
    void sayHello()
    {
        cout<<"Hello XYZ"<<endl;
    }
    void sayHello(string name)
    {
        cout<<"Hello "<<name<<endl;
    }
    int sayHello(int i)
    {
        return i;
    }
    //we can't overload function by changing only return type keeping argument type same

    //operator overloading:using operator for different functions
    public:
    int a;
    void operator +(A &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output "<<value2-value1<<endl;
    }
};

//RUNTIME POLYMORPHISM
//Method Overriding
class parentClass
{
    public:
    void func()
    {
        cout<<"Inside Paent Class"<<endl;
    }
};
class DerivedClass:public parentClass
{
    public:
    void func()
    {
        cout<<"Inside Derived Class"<<endl;
    }
};

int main()
{
    A obj;
    cout<<"\nFunction Overloading"<<endl;
    obj.sayHello();
    obj.sayHello("ABC");
    cout<<obj.sayHello(10)<<endl;

    cout<<"\nOperator Overloading"<<endl;
    A obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    //obj1 is the object for which call goes to class i.e. this-> is obj 1
    //obj 2 is argument of function

    cout<<"\nMethod Overriding"<<endl;
    DerivedClass obj3;
    obj3.func();//fuction of parent class gets overrided
}