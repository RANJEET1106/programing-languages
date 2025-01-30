#include <iostream>
#include <vector>
using namespace std;

class Stack{
    public:
        vector <int> arr;
        int top,size;

    Stack(int size){
        this->size=size;
        arr.resize(size);
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0) top--;
        else cout<<"Stack Underflow"<<endl;
    }

    int peek(){
        if(top>=0 && top<size) {
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }
};


int main(){
    Stack st(3);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek()<<endl;

    st.push(50);

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.isEmpty()<<endl;
    st.pop();

    cout<<st.isEmpty()<<endl;
    st.pop();

}