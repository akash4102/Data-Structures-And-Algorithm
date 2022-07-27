#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    //insertion;
    m.insert({"akash",5});
    m["babbar"]=25;

    cout<<m["unkknown"]<<endl;
    cout<<m.at("unkknown")<<endl;

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //iterator
    unordered_map<string,int>:: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}