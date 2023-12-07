#include <iostream>
using namespace std;

//LINEAR SEARCH
bool linearSearch(int arr[],int size,int k)
{
    if(size==0) return false;
    if(arr[0]==k) return true;
    else
    {
        bool remainingPart=linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}

//BINARY SEARCH
int binarySearch(int arr[],int s,int e,int key)
{
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==key) return mid;
    if(key>arr[mid]) s=mid+1;
    else e=mid-1;
    return binarySearch(arr,s,e,key);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"12 is present or not in the array "<<linearSearch(arr,10,12)<<endl;
    cout<<"6 is present or not in array "<<binarySearch(arr,0,9,6)<<endl;
}