#include <iostream>
using namespace std;

void reverse(string &s,int st,int ed){
    if(st>ed) return;
    swap(s[st],s[ed]);
    reverse(s,st+1,ed-1); 
}

int main(){
    string s="akash";
    reverse(s,0,s.size()-1);
    cout<<s<<endl;
    return 0;
}