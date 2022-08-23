#include "bits/stdc++.h"
using namespace std;


struct node{
    public:
    int u,v,wt;
    node(int a,int b,int c){
        this->u=a;
        this->v=b;
        this->wt=c;
    }
};
int findPar(int node,vector<int>&parent){
    if(node==parent[node]){
        return node;
    }
    return parent[node]=findPar(parent[node],parent);
}

void unionoftwo(int u,int v,vector<int>&parent,vector<int>&rank){
    u=findPar(u,parent);
    v=findPar(v,parent);
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
bool comp(node &a,node &b){
    return a.wt<b.wt;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<node>edges;
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }
    sort(edges.begin(),edges.end(),comp);

    vector<int>parent(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    vector<int>rank(n,0);
    int cost=0;
    vector<pair<int,int>>mst;
    for(auto it:edges){
        if(findPar(it.v,parent)!=findPar(it.u,parent)){
            cost+=it.wt;
            mst.push_back({it.u,it.v});
            unionoftwo(it.u,it.v,parent,rank);
        }
    }
    cout<<cost<<endl;
    for(auto it:mst)cout<<it.first<<" -> "<<it.second<<endl;
    return 0;
}