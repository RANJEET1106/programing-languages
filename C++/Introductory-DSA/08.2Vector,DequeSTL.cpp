#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main()
{
    cout<<endl<<endl;
    vector<int> v;
    vector<int> v1(5,11);
    for(int i=1;i<=5;i++) v.push_back(i);
    cout<<"Elements of vector v are "<<endl;
    for(int i:v) cout<<i<<' ';cout<<endl;
    cout<<"Elements of vector v1 are "<<endl;
    for(int i:v1) cout<<i<<' ';cout<<endl;

    deque<int>d;
    for(int i=1;i<=5;i++) d.push_back(i);
    cout<<"Elements of deque d are "<<endl;
    for(int i:d) cout<<i<<' ';cout<<endl;
    cout<<endl<<endl;
    //Operations on vector and deque are similar
    //additionally we can use pop_front and push_front in deque

//CAPACITY / SIZE

    cout<<"Number of elements in vector v is "<<v.size()<<endl;
    cout<<"Size of storage space currently allocated to vector v is "<<v.capacity()<<endl;
    cout<<"Number of maximum elements vector v can store is "<<v.max_size()<<endl;
    cout<<"Is vector v is empty "<<v.empty()<<endl;//returns 1 if vector is empty
    cout<<endl;
    
    //v.resize(n) function resizes the vector so that it contain n elements
    v.resize(4);
    //it delete element from last
    cout<<"Number of elements in vector v after resizing is "<<v.size()<<endl;
    cout<<endl;
    
    //v.shrink_to_fit() function reduces the capacity of vector to its size
    cout<<"Capacity before shrinking "<<v.capacity()<<endl;
    v.shrink_to_fit();
    cout<<"Capacity after shrinking "<<v.capacity()<<endl;
    cout<<endl;
    
    //v.reserve(n) makes vector capacity atleast enough to contain n elements
    v.reserve(100);
    cout<<"Capaity after reserving vector v for atleast 100 elements is "<<v.capacity()<<endl;
    cout<<endl<<endl;

//ELEMENT ACCESS

    cout<<"Element at the index 2 of vector v is "<<v[2]<<endl;
    cout<<"Element at the index 2 of vector v is "<<v.at(2)<<endl;
    cout<<"First element of vector v is "<<v.front()<<endl;
    cout<<"Last element of vector v is "<<v.back()<<endl;

    //v.data() returns the pointer of first element of vector v
    cout<<"Base address of vector v is "<<v.data()<<endl;
    cout<<endl<<endl;

//MODIFIERS

    //v1.assign(size,value) replace all elements of vector of 'size' by value
    //Number of element in vector v1 becomes equal to 'size'
    cout<<"Vector v1 before using assign operator"<<endl;
    for(int i:v1) cout<<i<<" ";cout<<endl;
    v1.assign(4,24);
    cout<<"Vector v1 after using assign operator"<<endl;
    for(int i:v1) cout<<i<<" ";cout<<endl;
    cout<<endl;

    v.push_back(6);//adding element 6 to the end of the vector
    cout<<"After adding element 6 to the end of vector v "<<endl;
    for(int i:v) cout<<i<<" ";cout<<endl;
    v.pop_back();//delete last element of the vector
    cout<<"After deleting last element from vector v "<<endl;
    for(int i:v) cout<<i<<" ";cout<<endl;
    cout<<endl;

    d.push_front(6);//adding element 6 to front of the deque
    cout<<"After adding element 6 to the start of deque d "<<endl;
    for(int i:d) cout<<i<<" ";cout<<endl;
    d.pop_front();//deleting first element of the deque
    cout<<"After deleting first element of deque d "<<endl;
    for(int i:d) cout<<i<<" ";cout<<endl;
    cout<<endl;

    v.insert(v.begin()+2,6);//insert element before specified position
    cout<<"Insert element 6 at index 2"<<endl;
    for(int i:v) cout<<i<<" ";cout<<endl;
    v.erase(v.begin()+2);//erase element at index 2
    //we can also erase elements in certain range by v.erase(v.begin(),v.begin()+2)
    cout<<"Delete element at index 2"<<endl;
    for(int i:v) cout<<i<<" ";cout<<endl;
    cout<<endl;

    v1.swap(v);//swap content of two vectors of same type
    cout<<"The elements of vector v are "<<endl;
    for(int i:v) cout<<i<<" ";cout<<endl;
    cout<<"The elements of vector v1 are "<<endl;
    for(int i:v1) cout<<i<<" ";cout<<endl;
    cout<<endl;

    v.clear();//remove all elements form the vector
    cout<<"Size of vector v after using clear function is "<<v.size()<<endl;
    cout<<endl;

    v1.emplace(v1.begin(),6);//increase capacity by inserting new element at position
    cout<<"Vector v1 after using emplace function "<<endl;
    for(int i:v1) cout<<i<<" ";cout<<endl;
    v1.emplace_back(20);//insert new element at the end of vector
    cout<<"Vector v1 after using emplace_back function "<<endl;
    for(int i:v1) cout<<i<<" ";cout<<endl;
    cout<<endl<<endl;
}
