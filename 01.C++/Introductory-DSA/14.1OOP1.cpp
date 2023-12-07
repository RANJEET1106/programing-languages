#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
    int health;//private member

public://access specifier

    char level;
    string name;

//setter and getter functions to access private members

    void getHealth()
    {
        cout<<"Health is "<<health<<endl;
    }
    void setHealth(int h)
    {
        health=h;
    }
    
    void print()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Health is "<<health<<endl;
        cout<<"Level is "<<level<<endl;
    }

//CONSRUCTOR

    Hero() //default constructor
    {
        cout<<"Default Constructor Called"<<endl;
    }

    Hero(int health)//parameterised constructor
    {
        cout<<"Parameterised Constructor Called"<<endl;
        this->health=health;
    }
    Hero(int health,char level)//parameterised constructor
    {
        cout<<"Parameterised Constructor Called"<<endl;
        this->health=health;
        this->level=level;
    }

    Hero(Hero &temp)//copy constructor
    {
        cout<<"Copy Constructor Called"<<endl;
        this->name=temp.name;
        this->health=temp.health;
        this->level=temp.level;
    }

//DESTRUCTOR

    ~Hero()
    {
        cout<<"Destructor Called for Object"<<endl;
    }
};

int main()
{
    Hero h1;
    cout<<"Size: "<<sizeof(h1)<<endl;//expected output :5 i.e. total size of properties but actual output :8 
    //study the concept of padding and greedy alignment
    //if the class is empty the sizeof object is 1

    h1.level='A';//assigning value to the public member
    cout<<"Level is: "<<h1.level<<endl;
    
    //we cant access private element outside the class
    //so we need some functins getter and setter

    h1.setHealth(95);//assigning value to the private class member
    h1.getHealth();
    cout<<endl;

//CONSTRUCTORS

    //default constructor:constructor called on object creation
    Hero h2;
    cout<<endl;

    //Parameterised constructor: constructor in which we can pass the arguments
    Hero h3(10);
    h3.getHealth();

    Hero h4(90,'B');
    h4.print();
    cout<<endl;

    //Copy constructor: copy the value of one object to the other
    //there is one default copy constructor hero h5(h4)
    //but we can write our own copy constructor
    Hero h5(h4);
    h5.print();
    cout<<endl;

//SHALLOW AND DEEP COPY

    //shallow copy:same memory location but differnt name
    //default copy constuctor => shallow copy
    //changes made in the one class reflects in other

    //deep copy:entierly copy class to the another location
    //we have to create custom copy constructor for deep copy
    //changes made in the one class not reflects in other
    h5.name="XYZ";
    Hero h6(h5);
    cout<<"Name of h4 is "<<h5.name<<endl;
    cout<<"Name of h6 is "<<h6.name<<endl;
    h5.name[0]='A';
    cout<<"Name of h4 is "<<h5.name<<endl;
    cout<<"Name of h6 is "<<h6.name<<endl;
    cout<<endl;

//COPY ASSIGNMENT OPERATOR

    cout<<"Copy Assignment Operator"<<endl;
    cout<<"Data of h1 "<<endl;
    h1.print();cout<<endl;

    cout<<"Data of h5 "<<endl;
    h5.print();cout<<endl;
    h1=h5;
    cout<<"Data of h1 "<<endl;
    h1.print();
    cout<<endl;

//DESTRUCTOR 
    //memory deallocates
    //destructor is created with every class automatically
    //however we can create our own destructor

    //we have to call destructor manually for the object created dynamically

    cout<<"Creating Object Dynamically "<<endl;
    Hero *h7=new Hero;//creating objet dynamically
    h7->name="ABC";
    h7->setHealth(80);
    h7->level='D';
    
    cout<<"Data of h7 is "<<endl;
    h7->print();
    cout<<endl;
    
    delete h7;//maanually destructor call
}