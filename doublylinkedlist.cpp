#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node*prev;
    Node(int n){
        this->data=n;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLenght(Node*head){
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insertAtHead(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* newNode=new Node(d);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        head=temp;
        return;
    }
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPositon(Node* &Tail ,Node* &head,int position,int d){
    if(position==1){
        insertAtHead(Tail,head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(Tail,head,d);
        return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(Node* &head,int position){
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node*curr=head;
    Node*previous=NULL;
    int cnt=1;
    while(cnt<position){
        previous=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    previous->next=curr->next;
    curr->next=NULL;
    delete curr;

}
int main(){
    Node* nodel=new Node(10);
    // Node* head=nodel;
    // Node* tail=nodel;
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(tail,head,25);
    print(head);
    insertAtHead(tail,head,22);
    print(head);
    insertAtHead(tail,head,55);
    print(head);
    insertAtTail(head,tail,125);
    print(head);
    insertAtTail(head,tail,525);
    print(head);
    insertAtPositon(tail,head,3,1000);
    print(head);
    // insertAtPositon(tail,head,7,10000);
    // print(head);
    insertAtPositon(tail,head,1,10506);
    print(head);
    deleteNode(head,7);
    print(head);
    return 0;
}