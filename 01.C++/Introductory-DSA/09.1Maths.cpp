#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n==0) return false;
    if(n==1) return false;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
uint64_t combinaton(int n,int r)
{
    uint64_t sum=1;
    for(int i=1;i<=r;i++) sum=sum*(n-r+i)/i;
    return sum;
}
int main()
{
    cout<<"10 is a Prime no "<<isPrime(10)<<endl;
    cout<<"3 is a Prime no "<<isPrime(3)<<endl;

    cout<<"GCD of 8 and 12 is "<<gcd(8,12)<<endl;

    cout<<"21C6 is "<<combinaton(21,6);
}
