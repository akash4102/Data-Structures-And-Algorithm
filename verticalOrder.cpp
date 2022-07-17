#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
};
void findPos(Node* root , vector<pair<int,pair<int,int>>>&ans,int row,int col){
    if(root==NULL)return;

    pair<int,pair<int,int>> curr={root->data,{row,col}};
    ans.push_back(curr);
    findPos(root->left,ans,row+1,col-1);
    findPos(root->right,ans,row+1,col+1);
}
vector<int> verticalOrder(Node *root)
{
    vector<int>res;
    vector<pair<int,pair<int,int>>>ans;
    findPos(root,ans,1,0);
    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
    }
    return res;
}

int main(){

    return 0;
}