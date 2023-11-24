#include <iostream>
#include <cmath>
using namespace std;

//MACROS
//macro iis a piece of code in a program that is replaced by value of macro
//syntax #define
//unlike veriable it don't consume any memory

#define pi 3.14

//GLOBAL VERIABLES
//it can be shared between functions
//Don't use global veriables - bad practice instead use ref verable 

int x=10;
void func1()
{
    x++;
}

//INLINE FUNCTION
//1 line -> easily make inline
//2-3 line -> depends on compiler
//>3 lines -> don't make inline
inline int func2(int a,int b)
{
    return a+b;
}
int main()
{
    int r=5;
    double area=pi*r*r;
    cout<<"Area is "<<area<<endl;

    cout<<"X before function call "<<x<<endl;
    func1();
    cout<<"X after function call "<<x<<endl;

    cout<<"Inline function "<<func2(1,6)<<endl;
}