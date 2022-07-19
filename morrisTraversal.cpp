#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// void MorrisTraversal(Node*root){
//     if(root==NULL)return;
//     Node*curr=root;
//     Node*pre;
//     while(curr!=NULL){
//         if(curr->left==NULL){
//             cout<<curr->data<<" ";
//             curr=curr->right;
//         }
//         else{
//             pre=curr->left;
//             while (pre->right!=NULL and pre->right!=curr){
//                 pre=pre->right;
//             }
//             if(pre->right==NULL){
//                 pre->right=curr;
//                 curr=curr->left;
//             }
//             else{
//                 pre->right=NULL;
//                 cout<<curr->data<<" ";
//                 curr=curr->right;
//             }
//         }
//     }
//     cout<<endl;
// }
// void MorrisTraversal(Node*root){
//     Node*pre,*curr;
//     if(root==NULL)return;
//     curr=root;
//     while(curr!=NULL){
//         if(curr->left==NULL){
//             cout<<curr->data<<" ";
//             curr=curr->right;
//         }
//         else{
//             pre=curr->left;
//             while(pre->right!=NULL and pre->right!=curr){
//                 pre=pre->right;
//             }
//             if(pre->right==NULL){
//                 pre->right=curr;
//                 curr=curr->left;
//             }
//             else{
//                 pre->right=NULL;
//                 cout<<curr->data<<" ";
//                 curr=curr->right;
//             }
//         }
//     }
// }


void MorrisTraversal(Node*root){
    Node*pre,*curr;
    if(root==NULL)return;
    curr=root;
    while (curr!=NULL)
    {
        if(curr->left==NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            pre=curr->left;
            while(pre->right!=NULL and pre->right!=curr){
                pre=pre->right;
            }
            if(pre->right==NULL){
                pre->right=curr;
                curr=curr->left;
            }
            else{
                pre->right=NULL;
                cout<<curr->data<<" ";
                curr=curr->right;
            }
        }
    }
    
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    MorrisTraversal(root);
 
    return 0;
}