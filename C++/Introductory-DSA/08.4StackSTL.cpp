#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    cout<<s1.empty()<<endl;//returns true if stack is empty
    s1.push(10);//insert element at the top
    s1.push(20);
    s1.push(30);
    cout<<"Topmost Element of Stack is "<<s1.top()<<endl;
    cout<<"Size of Stack is "<<s1.size()<<endl;
    s1.pop();//removes the topmost element fronm the stack
    cout<<s1.top()<<endl;
}