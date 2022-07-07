#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory is free for need withd data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
        return;
    }
    Node *temp = new Node(d);
    Node *curr = tail;
    while (curr->data != element)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}
void print(Node* &tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }
    Node*temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"list is empty please check again"<<endl;
        return;
    }
    Node*prev=tail;
    Node*curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(curr==prev){
        tail=NULL;
    }
    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
}
int main()
{
    Node*tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    // insertNode(tail,3,10);
    // print(tail);
    // insertNode(tail,10,9);
    // print(tail);
    // insertNode(tail,9,25);
    // print(tail);
    // insertNode(tail,3,7);
    // print(tail);
    deleteNode(tail,3);
    print(tail);

    return 0;
}