#include "bits/stdc++.h"
using namespace std;
template <typename T>
class graph
{
public:
    unordered_map<T, list<pair<T, T>>> adj;
    void addgraph(T u, T v, T weight)
    {
        adj[u].push_back({v, weight});
    }
    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"[ "<<j.first<<" "<<j.second<<" ],";
            }
            cout<<endl;
        }
    }
    void dfs(int node,unordered_map<int, bool> &visited, stack<int> &st)
    {
        visited[node] = true;
        for (auto i : adj[node])
        {
            if (visited[i.first]==false)
            {
                dfs(i.first, visited, st);
            }
        }
        st.push(node);
    }
    int shortestPath(int n, int e,int src,int dest)
    {
        unordered_map<int, bool> visited;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, st);
            }
        }
        vector<int>distance(n,INT_MAX);
        distance[src]=0;
        while(!st.empty()){
            int top=st.top();
            st.pop();
            if(distance[top]!=INT_MAX){
                for(auto i:adj[top]){
                    distance[i.first]=min(i.second+distance[top],distance[i.first]);
                }
            }
        }
        return distance[dest];
    }
};

int main()
{
    int n;cin>>n;
    int m;cin>>m;
    graph<int>g;
    for(int i=0;i<m;i++){
        int u,v,weight;
        cin>>u>>v>>weight;
        g.addgraph(u,v,weight);
    }
    g.printAdjList();
    cout<<"shortest path is "<<g.shortestPath(n,m,1,0)<<endl;
}