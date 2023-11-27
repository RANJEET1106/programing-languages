#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s={5,4,1,3,4,2};//sset takes only single copy of element and store them in increasing order
    set<int> s1={9,8,7,6,5};

//CAPACITY OR SIZE

    cout<<"Is the set is empty or not "<<s.empty()<<endl;
    cout<<"Size of the set is "<<s.size()<<endl;
    cout<<"Maximum size of the container is "<<s.max_size()<<endl;
    cout<<endl<<endl;

//MODIFIERS

    for (auto i:s) cout<<i<<" ";
    cout<<endl;
    cout<<"After Inserting the Value 6"<<endl;
    s.insert(6);
    for (auto i:s) cout<<i<<" ";
    cout<<endl;

    set<int>::iterator i=s.begin();//i=0
    i++;  
    s.erase(i);
    cout<<"After deleting element at index 1"<<endl;
    for (auto i:s) cout<<i<<" ";
    cout<<endl;

    for (auto i:s1) cout<<i<<" ";
    cout<<endl;
    cout<<"After Clearing the above set "<<endl;
    s1.clear();//clears the constainer
    for (auto i:s1) cout<<i<<" ";
    cout<<endl;

//OPERATIONS

    i=s.find(3);//returns the iterrator to the position of element else return the iterator at end
    cout<<*i<<endl;
    cout<<"Check if the element 4 is present or not in set "<<s.count(4)<<endl;

    i=s.lower_bound(3);//returns the iterator less than or equal to given element
    cout<<"Lower bound of 3 is "<<*i<<endl;

    i=s.upper_bound(5);//returns the iterator after the given position
    cout<<"Upper bound of 5 is "<<*i<<endl;
    cout<<endl;

    auto it=s.equal_range(4);//returns the pair of lower bound and upper bound of element
    cout<<"Lower bound of 4 is "<<*it.first<<endl;
    cout<<"Upper bound of 4 is "<<*it.second<<endl;

    it=s.equal_range(8);
    cout<<"Lower bound of 8 is "<<*it.first<<endl;
    cout<<"Upper bound of 8 is "<<*it.second<<endl;
}
