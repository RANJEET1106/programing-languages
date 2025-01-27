#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)//Constructor
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()//Destructor for dynamic node creation
    {
        int value=this->data;
        //memory free
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    //assuming that the element is present in the list
    // empty list
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode ->next=newnode;
        return;
    }
    Node* curr=tail;
    while(curr->data!=element)
        curr=curr->next;
    Node* temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
}

void print(Node* tail){
    if(tail==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node*&  tail,int value){
    if(tail==NULL){
        cout<<"List is Empty, Please check Again"<<endl;
        return;
    }
    Node*prev=tail;
    Node* curr=prev->next;

    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(tail==curr)
        tail=curr->next;
    if(curr==prev) // Single Node
        tail=NULL;
    curr->next=NULL;
    delete curr;
}

int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,7,10);
    print(tail);

    deleteNode(tail,3);
    print(tail);
    deleteNode(tail,10);
    print(tail);
    deleteNode(tail,6);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    deleteNode(tail,7);
    print(tail);
}