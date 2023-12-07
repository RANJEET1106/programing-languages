#include <iostream>
#include <climits>
using namespace std;
void printArray(int num[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<num[i]<<" ";
        }
    }

void getArray(int num[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cin>>num[i];
        }
        
    }

int getMaxArr (int num[],int size)
    {
        int max1 = INT_MIN;
        for(int i=0;i<size;i++)
        {
            max1=max(max1,num[i]);
        }
        return max1;
    }

int getMinArr (int num[],int size)
    {
        int min1 = INT_MAX;
        for(int i=0;i<size;i++)
        {
            min1=min(min1,num[i]);
        }
        return min1;
    }

int getSumArr (int num[],int size)
    {
        int sum=0;
        for (int i=0;i<size;i++)
        {
            sum=sum+num[i];
        }
        return sum;
    }

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[5]={6,3,4,77,1};
    int arr1[5]={};
    getArray(arr1,5);
    printArray(arr1,5);
    cout<<endl;
    printArray(arr,5);
    cout<<endl;
    cout<<getMaxArr(arr,5)<<endl;
    cout<<getMinArr(arr,5)<<endl;
    cout<<getSumArr(arr,5)<<endl;
    reverse(arr,5);
    printArray(arr,5);
    cout<<endl;
}
