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

    void shortestPath(vector<int>&dist,int source){
        set<pair<int,int>>st;
        dist[source]=0;
        st.insert({0,source});
        while(!st.empty()){
            auto top=*(st.begin());
            int nodedistance=top.first;
            int topnode=top.second;
            st.erase(st.begin());
            for(auto i:adj[topnode]){
                if(nodedistance+i.second<dist[i.first]){
                    auto record=st.find({dist[i.first],i.first});
                    if(record!=st.end()){
                        st.erase(record);
                    }
                    dist[i.first]=nodedistance+i.second;
                    st.insert({dist[i.first],i.first});
                }
            }
        }
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
    vector<int>distance(n,INT_MAX);
    g.shortestPath(distance,0);
    for(int i=0;i<n;i++){
        cout<<distance[i]<<" ";
    }cout<<endl;
    // cout<<"shortest path is "<<g.shortestPath(n,m,1,0)<<endl;
}