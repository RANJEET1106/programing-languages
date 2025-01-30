#include <iostream>
#include <vector>
using namespace std;


class Queue{
    vector<int> arr;
    int qfront,rear,size;

    public:
        Queue(int size){
            arr.reserve(size);
            qfront=0;
            rear=0;
            this->size=size;
        }

        void enqueue(int data){
            if(rear==size){
                cout<<"Queue is Full"<<endl;
            }
            else{
                arr[rear]=data;
                rear++;
            }
        }

        int dequeue(){
            if(qfront==rear){
                return -1;
            }
            else{
                int ans=arr[qfront];
                arr[qfront]=-1;
                qfront++;
                if(qfront==rear){
                    qfront=0,rear=0;
                }
                return ans;
            }
        }

        int front(){
            if(qfront==rear) return -1;
            else return arr[qfront];
        }

        bool isEmpty(){
            if(qfront==rear) return true;
            else return false;
        }

};


class CircularQueue{
    vector<int> arr;
    int front,rear,size;

    public:
        CircularQueue(int size){
            arr.reserve(size);
            front=rear=-1;
            this->size=size;
        }

        void enqueue(int value){
            if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
                cout<<"Queue is Full"<<endl;
                return;
            }
            else if(front==-1) front=rear=0;
            else if(rear==size-1 && front!=0) rear=0;
            else rear++;
            arr[rear]=value;
        }

        int dequeue(){
            if(front==-1){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            int ans=arr[front];
            arr[front]=-1;
            if(front==rear) front=rear=-1;
            else if(front==size-1) front=0;
            else front++;
            return ans;
            
        }

        int qfront(){
            if(front==-1){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            return arr[front];
        }
};


class Deque{
    vector<int> arr;
    int front,rear,size;
    public:
        Deque(int n){
            size=n;
            arr.reserve(size);
            front=rear=-1;
        }

        void pushFront(int value){
            if(isFull()){
                cout<<"Queue is Full"<<endl;
            }
            else if(isEmpty()) front=rear=0;
            else if(front==0 && rear!=size-1) front=size-1;
            else front--;
            arr[front]=value;
        }

        void pushRear(int value){
            if(isFull()){
                cout<<"Queue is Full"<<endl;
                return;
            }
            else if(isEmpty()) front=rear=0;
            else if(rear==size-1 && front!=0) rear=0;
            else rear++;
            arr[rear]=value;
        }

        int popFront(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            int ans=arr[front];
            arr[front]=-1;
            if(front==rear) front=rear=-1;
            else if(front==size-1) front=0;
            else front++;
            return ans;
        }

        int popRear(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            int ans=arr[rear];
            arr[rear]=-1;
            if(front==rear) front=rear=-1;
            else if(rear==0) rear=size-1;
            else rear--;
            return ans;
        }

        int getFront(){
            if(isEmpty()) return-1;
            else return arr[front]; 
        }

        int getRear(){
            if(isEmpty()) return -1;
            else return arr[rear];
        }

        bool isEmpty(){
            if(front==-1) return true;
            else return false;
        }

        bool isFull(){
            if((front==0 && rear==size-1) || (front!=0 && rear==(front-1)%(size-1)))
                return true;
            else return false;
        }
};


int main(){

    Queue q1=Queue(5);
    q1.enqueue(5);
    q1.enqueue(6);
    cout<<q1.front()<<endl;

    q1.dequeue();
    cout<<q1.front()<<endl;

    q1.dequeue();
    cout<<q1.isEmpty()<<endl<<endl;

    CircularQueue q2=CircularQueue(5);
    q2.enqueue(10);
    q2.enqueue(15);
    cout<<q2.qfront()<<endl;

    q2.dequeue();
    cout<<q2.qfront()<<endl<<endl;


    Deque q3=Deque(5);
    q3.pushFront(10);
    q3.pushRear(15);
    q3.pushFront(5);
    cout<<q3.getFront()<<endl;
    cout<<q3.getRear()<<endl;

    q3.popFront();
    cout<<q3.getFront()<<endl;
    q3.popRear();
    cout<<q3.getRear()<<endl;
    q3.popFront();
    cout<<q3.isEmpty()<<endl;




}