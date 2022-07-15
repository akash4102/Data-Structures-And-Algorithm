#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildTree(node*root){
    cout<<"enter the data"<<endl;
    int data;cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left "<<root->data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data for inserting in right "<<root->data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        int size=q.size();
        while(size--){
            node*temp=q.front();
            q.pop();
            int data=temp->data;
            cout<<data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        cout<<endl;
    }
    
}
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"enter data for root"<<endl;
    int data;cin>>data;
    root=new node(data);
    q.push(root);
    while (!q.empty())
    {
        node*temp=q.front();
        q.pop();
        cout<<"enter left node for "<<temp->data<<endl;
        int leftData;cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"enter right node for "<<temp->data<<endl;
        int rightData;cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
    
}
int main(){
    node* root=NULL;

    buildFromLevelOrder(root);
    // root=buildTree(root);
    cout<<"levelorder"<<endl;
    levelOrderTraversal(root);
    // cout<<endl;
    // cout<<"preorder"<<endl;
    // preorder(root);
    // cout<<endl;
    // cout<<"inorder"<<endl;
    // inorder(root);
    // cout<<endl;
    // cout<<"postorder"<<endl;
    // postorder(root);
    // cout<<endl;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1