
#include <iostream>
using namespace std;
void  pattern1(int n)
{/* 
111     ***     123
222  or ***  or 123
333     ***     123
*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i; //for printing second one relace 'i' with '*'
                    //for printing third one replace 'i' with 'j'
        }
        cout<<endl;
    }
}
void pattern2(int n)
{/*
123
456
789
*/
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<x;
            x++;
        }
        cout<<endl;
    }
}
void pattern3(int n)
{/*
*           1
**     or   22
***         333
*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"; //for printing second one relace '*' with 'i'
        }
        cout<<endl;
    }
}
void pattern4(int n)
{/*
1
23
456
*/
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<x;
            x++;
        }
        cout<<endl;
    }
}
void pattern5(int n)
{/*
1           1
23          21
345    or   321
4567        4321
*/
    for(int i=1;i<=n;i++)
    {
        int x=i;
        for(int j=1;j<=i;j++)
        {
            cout<<x;
            x++;//for second pattern replace x++ by x--
        }
        cout<<endl;
    }
}
void pattern6(int n)
{/*
AAA
BBB
CCC
*/
    int x=64;
    for(int i=1;i<=n;i++)
    {
        x++;
        for(int j=1;j<=n;j++)
        {
            char ch=x;
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern7(int n)
{/*
ABC     ABC     A
ABC  or DEF  or BB
ABC     GHI     CCC
*/
    int x=64;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)//for third patern replace conditon with j<=i
        {
            x++;
            char ch=x;
            cout<<ch;
        }
        x=64;//for second pattern erase this line
        cout<<endl;
    }
}
void pattern8(int n)
{/*
   *           1
  **     or   22
 ***         333
****        4444
*/
    for(int i=1;i<=n;i++) //i means ith row
    {
        //for the triangle of blank spaces
        int j=n-i; //j is no of blank spaces in each row
        while(j--)
        {
            cout<<" ";
        }
        //for the triangle of *
        for(int k=1;k<=i;k++)
        {
            cout<<"*";//for second pattern replace * by i
        }
        cout<<endl;
    }
}
void pattern9(int n)
{/*
****        1111
 ***   or    222
  **          33            
   *           4
*/
    for(int i=1;i<=n;i++)
    {
        int j=i-1;
        while(j--)
        {
            cout<<" ";
        }
        int k=n-i+1;
        while(k--)
        {
            cout<<"*";//for second pattern replace * by i
        }

        cout<<endl;
    }
}
void pattern10(int n)
{/*
   1
  121
 12321
1234321
*/
    for(int i=1;i<=n;i++)
    {
        //for first triangle of blank spaces
        int j=n-i;
        while(j--)
        {
            cout<<" ";
        }
        //for second triangle of increasing no upto max no
        j=1;
        while(j<=i)
        {
            cout<<j;
            j++;        
        }
        //for third triangle of decreasing no from(max-1)
        j=i-1;
        while(j>0)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
    }
}
//VVIMP
void pattern11(int n)
{/*
1234554321
1234**4321
123****321
12******21
1********1
*/
    for(int i=1;i<=n;i++)
    {
        //printing first triangle with increment no
        int j=1;
        while(j<=(n-i+1))
        {
            cout<<j;
            j++;
        }
        //printing second triangle of "*"
        j=(i-1)*2;
        while(j>0)
        {
            cout<<"*";
            j--;
        }
        //printing third trianglle with decrement no
        j=(n-i+1);
        while(j>0)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
    }
}
int main()
{   int n;
    cout<<"Enter the number of lines in pattern"<<endl;
    cin>>n;
    pattern1(n); cout<<endl;
    pattern2(n); cout<<endl;
    pattern3(n); cout<<endl;
    pattern4(n); cout<<endl;
    pattern5(n); cout<<endl;
    pattern6(n); cout<<endl;
    pattern7(n); cout<<endl;
    pattern8(n); cout<<endl;
    pattern9(n); cout<<endl;
    pattern10(n); cout<<endl;
    pattern11(n); cout<<endl;//VVIMP
}
