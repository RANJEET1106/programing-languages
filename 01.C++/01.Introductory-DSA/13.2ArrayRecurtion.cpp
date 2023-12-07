#include <iostream>
using namespace std;

//Is Sorted
bool isSorted(int arr[],int size)
{
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;
    else 
    {
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}

//Get Sum
int getSum(int arr[],int size)
{
    if(size==0) return 0;
    if(size==1) return arr[0];
    int remainingPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main()
{
    int arr[10]={1,3,5,6,7,8,9,10,2,4};
    cout<<isSorted(arr,10)<<endl;
    cout<<getSum(arr,10)<<endl;
}