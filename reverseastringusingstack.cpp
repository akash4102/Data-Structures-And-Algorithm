#include "bits/stdc++.h"
using namespace std;

int main(){
    string s="akshverma";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<st.size()<<endl;
    return 0;
}