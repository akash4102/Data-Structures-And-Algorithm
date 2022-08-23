#include "bits/stdc++.h"
using namespace std;

int parent[100000];
int rank[100000];

void makeSet(int n){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findPar(int node){
    if(node==parent[node]){
        return node;
    }
    return parent[node]=findPar(parent[node]);
}

void unionoftwo(int u,int v){
    u=findPar(u);
    v=findPar(v);
    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[v]<rank[u]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}
int main(){
    makeSet();
    int n;
    cin>>n;
    while(n--){
        int u,v;cin>>u>>v;
        unionoftwo(u,v);
    }
    if(findPar(2)!=findPar(3)){
        cout<<"different component"<<endl;
    }
    else{
        cout<<"same component"<<endl;
    }
}