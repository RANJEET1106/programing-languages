#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    cout<<q.empty()<<endl;//returns true if the queue is empty
    q.push(10);//add the element at the end of the queue
    q.push(20);
    q.push(30);
    cout<<"Size of Queue is "<<q.size()<<endl;
    cout<<"First Element of Queue is "<<q.front()<<endl;
    cout<<"Last Element of Queue is "<<q.back()<<endl;
    q.pop();//delete the first element of queue
    cout<<"First Element of Queue is "<<q.front()<<endl;

//Priority Queue is similar to que but it just stores max to min
//We can only access first element in priority queue i.e. top element

    priority_queue<int> pq;
    pq.push(20);
    pq.push(30);
    pq.push(10);

    cout<<"Max element of queue is "<<pq.top()<<endl;
    //all other functions are similar to queue
}