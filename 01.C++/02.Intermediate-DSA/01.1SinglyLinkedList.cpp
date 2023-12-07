#include <iostream>
using namespace std;

//creating a node
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

//Traversing the Singly Linked List
void print(Node *&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//INSERTION IN THE LINKED LIST

//Insert at the head
void insertAtHead(Node*&head , int data)
{
    //create new node
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=head;// putting the address of the head in thenext of link
    head=nodeToInsert;//setting address of head as temp
}

//Insert at the tail
void insertAtTail(Node*&tail,int data)
{
    //create new node
    Node* nodeToInsert=new Node(data); 

    tail->next=nodeToInsert;
    tail=nodeToInsert;   
}

//Insering in node at specific position
void insertAtPosition(Node *&head,Node *&tail,int position,int data)
{
    //Inserting at the begining
    if(position==1)
    {
        insertAtHead(head,data);
        return;
    }
    //Transversing the LL upto specific position
    int count=1;
    Node*temp=head;
    while(count<position-1)//reaching one node befor the position where we want to insert
    {
        temp=temp->next;
        count++;
    }
    //create new node
    Node* nodeToInsert=new Node(data);
    
    //Inserting at the speciic position
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

//DELETION FROM THE LINKED LIST

//Deleting node at the specific position
void deleteNode(Node*&head,Node*&tail,int position)
{
    if(position==1)
    {
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node *curr=head;
        Node *prev=NULL;
        int count=1;
        while(count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL)
        {
            prev->next=NULL;
            tail=prev;
            delete curr;
        }
        else
        {
            prev->next=curr->next;
            delete curr;
        }
    }
}

int main()
{
    Node *node1=new Node(10);
    print(node1);
    
    Node*head=node1;
    Node*tail=node1;
    insertAtHead(head,12);
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,1,22);
    insertAtPosition(head,tail,6,30);
    
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    cout<<endl;

    deleteNode(head,tail,6);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}