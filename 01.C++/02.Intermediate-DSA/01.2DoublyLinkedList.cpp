#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    //constructor
    Node(int d){
        this->data=d;
        this->next= NULL;
        this->prev=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }

};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head,Node* &tail, int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void deleteNode(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next->prev=prev;
    curr->next=NULL;
    
    delete curr;
}

int main(){
    // Node* node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    cout<<"Length of LL is "<<getLength(head)<<endl;
    insertAtHead(head,tail,5);
    cout<<"after inserting at head ";
    print(head);

    insertAtTail(head,tail,15);
    cout<<"after inserting at tail ";
    print(head); 

    insertAtPosition(head,tail,2,7);
    cout<<"after inserting at position 2(two): ";
    print(head);

    deleteNode(head,2);
    cout<<"After deleting 2nd Node: ";
    print(head);

}