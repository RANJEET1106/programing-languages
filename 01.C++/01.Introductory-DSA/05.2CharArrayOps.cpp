#include <iostream>
using namespace std;
void printArr(char name[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<name[i];
    }
}
int getLength (char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}
bool palindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(name[s]!=name[e]) return 0;
        else { s++;e--;}
    }
    return 1;
}
char toLowerCase (char ch)
{
    if(ch>='a'&&ch<='z') return ch;
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}
int main()
{
    char name[]="XYZ";
    int n=getLength(name);
    reverse(name,n);
    printArr(name,n);
    cout<<palindrome(name,n)<<endl;


}
