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

    /*
    More Modifiers similar to vector and deque
    assign
    emplace_back
    push_front
    pop_front
    emplace_back
    push_back
    pop_back
    emplace
    insert
    erase
    swap
    resize
    clear
    */

//OPERATIONS

    //splice operator:Transferelements from one list to another
    /*
    list1_name.splice (iterator position, list2)
                    or 
    list1_name.splice (iterator position, list2, iterator i)
                    or 
    list1_name.splice (iterator position, list2, iterator first, iterator last)
    */

    list<int> l1={1,2,3,4,5};
    list<int> l2={6,7,8};
    
    for(int i:l1) cout<<i<<" ";
    cout<<endl;
    for(int i:l2) cout<<i<<" ";
    cout<<endl;
    
    list<int>::iterator it;
    it=l1.begin();
    advance(it,2);
    l2.splice(l2.begin(),l1,it,l1.end());
    for(int i:l2) cout<<i<<" ";
    cout<<endl;    
    //remove_if():removes an element fulfiling the condition
    l.unique();//removes all duplicate elemets
    l1.merge(l2);//merge two sorted list
    for(int i:l1) cout<<i<<" ";
    cout<<endl;

    //sort and revferse function similar to vector  
}
