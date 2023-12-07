#include <iostream>
using namespace std;

//FACTORIAL FUNCTION
int factorial(int n)
{
    if(n==0) return 1;
    return n*factorial(n-1);
}

//POWER
int power(int n,int r)
{
    if(r==0) return 1;
    if(r==1) return r;
    int ans=power(n,r/2);
    if(r&1) return n*ans*ans;
    else return ans*ans;
}

//VVIMP
//print counting
void print1(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    print1(n-1);
}
void print2(int n)
{
    if(n==0) return;
    print2(n-1);
    cout<<n<<" ";
}

//FIBONACHI SERIES
int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return (fib(n-1)+fib(n-2));
}

//SAY DIGIT
void sayDigit(int n)
{
    string arr [10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0) return ;
    int digit=n%10;
    n/=10;
    sayDigit(n);
    cout<<arr[digit]<<" ";
}
int main()
{
    cout<<"factorial of 10 is "<<factorial(10)<<endl;
    cout<<"10 to the power 4 is "<<power(10,4)<<endl;
    print1(5);cout<<endl;
    print2(5);cout<<endl;
    cout<<"fifth number of fibonacchi series is "<<fib(5)<<endl;
    sayDigit(213);cout<<endl;
}