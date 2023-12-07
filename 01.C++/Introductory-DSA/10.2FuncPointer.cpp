#include <iostream>
using namespace std;
void update(int *p)
{
    //inside function it creates copy of *p
    p++;
    cout<<"Inside update function "<<p<<endl;
}
void update1(int **p)
{
    *p++;
    cout<<"Inside update1 function "<<*p<<endl;
}
int main()
{
    int value=5;
    int *p=&value;
    int **p1=&p;
    cout<<"Before update p is "<<p<<endl;
    update(p);
    cout<<"After update p is "<<p<<endl;
    //output of above two is same
    //for updating pointer use pass by reference
    update1(p1);
    cout<<"After update1 p is "<<p1<<endl;
    
}