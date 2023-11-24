#include <iostream>
using namespace std;
int main()
{
    //pointer ->stores the address
    int num=5;
    int *p= &num;

//Understanding the role of different operators

    cout<<endl<<endl;
    cout<<"value stored in variable num "<<num<<endl;
    cout<<"address of variable num "<<&num<<endl;
    cout<<"value stored in p i.e. address of num "<<p<<endl;
    cout<<"value stored at address stored in p i.e value of num "<<*p<<endl;
    cout<<"address of pointer p "<<&p<<endl; 
    cout<<endl;

    (*p)++;++(*p);//access the element stored in pointer p and increment it by 1
    cout<<(*p)<<endl;
    cout<<endl;

    p--;--p;//change the address stored in p by 1 unit i.e. by 4 for int pointer
    cout<<(p)<<endl;
    p+=2;
    cout<<endl;

    int *q=p;//coping poiter
    cout<<q<<endl;
    cout<<endl<<endl;

//Pointers in Array

    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<"Address of first memory block is "<<&arr[0]<<endl;
    cout<<"Value of first memory block is "<<arr[0]<<endl;
    cout<<"Value of first memory block is "<<*arr<<endl;
    cout<<"1+ Value of first memory block is "<<*arr+1<<endl;
    cout<<"Value of second memory block is "<<*(arr+1)<<endl;
    cout<<endl;

    /*
        arr=arr+1 --> error
        as arr is already mapped in symbol table
        but we can do it with pointer
    */
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<"Address of second memory block of array is "<<ptr<<endl;
    //No error ptr takes value of second memory blocks
    cout<<endl<<endl;

//Character Array

    //int array and char array have different implementation
    char ch[6]="abcde";
    cout<<"Address of first element of string is "<<ch<<endl;
    char *c=&ch[0];
    cout<<"Address of first element of string is "<<c<<endl;

    char temp='z';
    char *t=&temp;
    cout<<"Address of first element of string is "<<t<<endl;
    //if size of string is not fixed then it prints string until it gets null pointer

//Double pointer

    int i=5;
    int *m=&i;
    int **m2=&m;//Double pointer
}