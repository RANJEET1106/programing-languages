#include <iostream>
using namespace std;

class Hero
{
    public:
    //static keyword creates a data member that belongs to the class 
    //no need to create object
    //it is goig to remain same for all objects created
    static int timeToComplete;

    //static function can access only static member
    //no need to create object 
    static void staticFunc()
    {
        cout<<timeToComplete<<endl;
    }
};
int Hero :: timeToComplete=5;

int main()
{
    cout<<Hero::timeToComplete<<endl;
    Hero::staticFunc();
}
