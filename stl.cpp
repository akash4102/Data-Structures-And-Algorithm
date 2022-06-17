#include "bits/stdc++.h"
using namespace std;

int main(){
    //maxheap
    priority_queue<int>maxi;
    //minheap
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(5);
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    return 0;
}