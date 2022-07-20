#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int n){
        data=n;
        left=NULL;
        right=NULL;
    }

};
void  inorder(Node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }
    else{
        root->left=insertIntoBST(root->left,data);
    }
    return root;
}
Node* minVal(Node*root){
    if(root==NULL)return NULL;
    while(root->left!=NULL) root=root->left;
    return root;
}
Node* maxVal(Node*root){
    if(root==NULL)return NULL;
    while(root->right!=NULL)root=root->right;
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root= insertIntoBST(root,data);
        cin>>data;
    }
}

Node* deleteFromBST(Node*root,int val){
    if(root==NULL)return root;
    if(root->data==val){
        // 0 child
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left!=NULL and root->right==NULL){
            Node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL and root->right!=NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left!=NULL and root->right!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
    return root;
}

int main(){
    Node* root=NULL;
    cout<<"enter data to create bst"<<endl;
    takeInput(root);
    inorder(root);
    cout<<endl;
    cout<<maxVal(root)->data<<endl;
    cout<<minVal(root)->data<<endl;
    root=deleteFromBST(root,500);
    inorder(root);
    cout<<INT_MIN<<endl;
    cout<<INT_MAX<<endl;
}