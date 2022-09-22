#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int n){
        this->data=n;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<endl;
    }
};
void insertAtHead(Node* &head,int d){
        Node*temp=new Node(d);
        temp->next=head;
        head=temp;
    }
void insertAtTail(Node* &Tail,int d){
    Node*temp=new Node(d);
    Tail->next=temp;
    Tail=temp;
}
void print(Node* &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

void insertAtPositoin(Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=new Node(d);
    Node*res=head;
    while(res!=NULL and position>1){
        res=res->next;
        position--;
    }
    temp->next=res->next;
    res->next=temp;
}
void deleteNode(Node* &head,int position){
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node*current=head;
    Node*prev=NULL;
    int cnt=1;
    while(cnt<position){
        cnt++;
        prev=current;
        current=current->next;
    }
    prev->next=current->next;
    current->next=NULL;
    delete current;
}
int main(){
    Node* link=new Node(10);
    insertAtHead(link,12);
    print(link);
    insertAtHead(link,12);
    print(link);
    insertAtHead(link,12);
    print(link);
   // insertAtHead(link,12);
    print(link);
    insertAtPositoin(link,1,25);
   // print(link);
   // deleteNode(link,3);
   // print(link);
    deleteNode(link,1);
    print(link);

    // Node*copy=link;
    // print(link);
    // insertAtTail(copy,13);
    // print(link);
    // insertAtHead(link,12);
    // print(link);
    // insertAtHead(link,15);
    // print(link);
    // insertAtHead(link,125);
    // print(link);
    // insertAtTail(copy,27);
    // print(link);
    // Node* link;
    // link->data=10;
    // cout<<link->data<<endl;
    // cout<<link->next<<endl;

    return 0;
}
