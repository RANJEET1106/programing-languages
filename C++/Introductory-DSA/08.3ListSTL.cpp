#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    // similarly pop_back and pop_front
    for(int i=3;i<=5;i++) l.push_back(i);

//CAPACITY / SIZE

    cout<<endl<<endl;
    cout<<"Is list is empty "<<l.empty()<<endl;
    cout<<"Size of list is "<<l.size()<<endl;
    cout<<"Maximum size of list can hold "<<l.max_size()<<endl;
    cout<<endl<<endl;

//ELEMENT ACCESS

    // random access is not possible
    cout<<"First element of the list is "<<l.front()<<endl;
    cout<<"Last element of the list is "<<l.back()<<endl;
    cout<<endl<<endl;

//MODIFIERS

    
}
