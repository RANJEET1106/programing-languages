#include <iostream>
#include <array>
using namespace std;
int main()
{
    cout<<endl<<endl;
    array<int,4> arr={1,4,3,2};
    array<int,4> arr1={10,9,7,5};
    cout<<"Array arr is"<<endl;
    for(auto i:arr) cout<<i<<" ";cout<<endl;
    cout<<endl<<endl;

//CAPACITY / SIZE

    //arr.size() or arr.max_size() operator returns the number of element of array
    cout<<"Number of elements of Array arr is "<<arr.size()<<endl;
    cout<<"Number of elements of Array arr is "<<arr.max_size()<<endl;
    cout<<"arr empty or not "<<arr.empty()<<endl;//returns 1 if array is empty else return 0

    //sizeof(arr) operator returns the total size of array in bytes
    cout<<"Size of array arr is "<<sizeof(arr)<<endl;
    cout<<endl<<endl;
    
//ELEMENT ACCESS

    cout<<"Element at second index in arr is "<<arr[2]<<endl;
    cout<<"Element at second index in arr is "<<arr.at(2)<<endl;
    cout<<"First Element of arr is "<<arr.front()<<endl;//returns first element of array
    cout<<"Last Element of arr is "<<arr.back()<<endl;//returns last element of array

    //arr.data() function retirns the pointer to the first elements of array
    cout<<"Base address of arr is "<<arr.data()<<endl;
    cout<<endl<<endl;

//MODIFIERS

    //arr1.fill() operatoor is used to replace all values of array with any element
    cout<<"arr1 before using fill algorithm"<<endl;
    for(auto i:arr1) cout<<i<<" "; cout<<endl;
    arr1.fill(10);
    cout<<"arr1 after using fill algorithm"<<endl;
    for(auto i:arr1) cout<<i<<" "; cout<<endl;
    
    arr.swap(arr1);//swap content of two arrays of same type
    cout<<"element of array arr "<<endl;
    for(auto i:arr) cout<<i<<" "; cout<<endl;
    cout<<"element of array arr1 "<<endl;
    for(auto i:arr1) cout<<i<<" "; cout<<endl;
    cout<<endl<<endl;
}
