#include <iostream>
using namespace std;

int linSearch(int num[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(num[i]==key) return i;
    }
    return -1;
}
int binSearch(int num[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(num[mid]==key) return mid;
        else if (key>num[mid]) start=mid+1;
        else end=mid-1;
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr1[5]={1,55,88,69,9};
    int arr2[5]={1,22,33,44,55};
    cout<<linSearch(arr1,5,9)<<endl;
    cout<<binSearch(arr2,5,44)<<endl;
}