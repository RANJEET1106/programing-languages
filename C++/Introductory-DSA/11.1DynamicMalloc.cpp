
//Dynamic memory allocatin is basically memory aloocated in heap
//generally we don't use it in practical life

#include <iostream>
using namespace std;
int main()
{
    //creating char dynamically using new keyword
    char *ch=new char;
    *ch='5';
    cout<<*ch<<endl;
    cout<<sizeof(ch)<<endl;
    //we have to elete memory allocated in heap manually
    delete ch;
    cout<<*ch<<endl;

    //creating 1D dynamic array
    int n;
    cout<<"Enter the number of elements you want in the array"<<endl;
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    cout<<endl;
    delete []arr1;

    //creating 2D dynamic array
    cout<<"Enter the dimention of square matrix"<<endl;
    cin>>n;
    int **arr2=new int*[n];//for first row
    for(int i=0;i<n;i++) arr2[i]=new int[n];//for columns

    //taking input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cin>>arr2[i][j];
    }

    //display output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<<arr2[i][j]<<" ";
        cout<<endl;
    }

    //releasing memory
    for(int i=0;i<n;i++) delete []arr2[i];
    delete []arr2;
}