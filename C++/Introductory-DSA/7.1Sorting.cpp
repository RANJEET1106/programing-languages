#include <iostream>
using namespace std;
void selectionSort(int num[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(num[j]<num[minIndex]) minIndex=j;
        }
        swap(num[minIndex],num[i]);
    }
}
void bubbleSort(int num[],int n)
{
    for(int i=1;i<n;i++) // Never initialise i=0
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
            if(num[j]>num[j+1]) swap(num[j],num[j+1]);
        }
        if(swapped==false) break;
    }
}
void insertionSort(int num[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=num[i],j=i-1;
        while(j>=0)
        {
            if(num[j]>temp) num[j+1]=num[j];
            else break;
        }
        num[j+1]=temp;
    }
}
int main()
{
    int arr[5]={1,55,22,98,44};
    selectionSort(arr,5);
    bubbleSort(arr,5);
    selectionSort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
