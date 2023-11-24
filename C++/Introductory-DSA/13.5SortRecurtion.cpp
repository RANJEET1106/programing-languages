#include <iostream>
using namespace std;

//BUBBLE SORT
void sortArray(int arr[],int n)
{
    if(n==0 || n==1) return;
    for(int i=0;i<n-1;i++)
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    sortArray(arr,n-1);
}

//MERGE SORT
void merge(int arr[],int s,int e)
{
    // calculating the size of arrray
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    //dynamically allocating the memory to both arrays
    int *first=new int(len1);
    int *second=new int(len2);

    // copy values from main array to this arrrays
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++) first[i]=arr[mainArrayIndex++];
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++) second[i]=arr[mainArrayIndex++];

    //merge two sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2]) 
            arr[mainArrayIndex++]=first[index1++];
        else
            arr[mainArrayIndex++]=second[index2++];
    }
    while(index1<len1) 
        arr[mainArrayIndex++]=first[index1++];
    while(index2<len2)
        arr[mainArrayIndex++]=second[index2++];
    delete []first;
    delete []second;
}
void mergeSort(int arr[],int s,int e)
{
    if(s>=e) return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

//QUICK SORT
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++) 
        if(arr[i]<=pivot) count++;

    //place pivot at right position found till now
    //count is the number of elements in array less than element at the pivot index
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    //shifting elements less than pivot index to the left of it and others on right side
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot) i++;
        while(arr[j]>=pivot) j--;

        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e)
{
    if(s>=e) return; //base case
    
    int p=partition(arr,s,e); //partition

    quickSort(arr,s,p-1); //left part
    quickSort(arr,p+1,e); //right part
}

int main()
{
    int arr[10]={2,5,8,9,6,3,1,4,7,5};
    sortArray(arr,10);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    
    int arr1[10]={2,5,8,9,6,3,1,4,7,5};
    mergeSort(arr1,0,9);
    for(auto i:arr1) cout<<i<<" ";
    cout<<endl;

    int arr2[10]={2,5,8,9,6,3,1,4,7,5};
    quickSort(arr2,0,9);
    for(auto i:arr2) cout<<i<<" ";
    cout<<endl;
}