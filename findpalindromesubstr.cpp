#include "bits/stdc++.h"
using namespace std;

// bool isPalindrome(string s){
//     stack<char>st;
//     for(int i=0;i<s.size();i++){
//         st.push(s[i]);
//     }
//     string temp;
//     while(!st.empty()){
//         temp+=st.top();
//         st.pop();
//     }
//     if(temp==s)return true;
//     return false;
// }

// int main(){
//     string s;cin>>s;
//     int k;cin>>k;
//     int n=s.size();
//     int ans=0;
//     for (int i = 0; i < n; i++){
//         for (int len = 1; len <= n - i; len++){
//             // cout << s.substr(i, len) << endl;
//             string res=s.substr(i,len);
//             if(res.size()>=k){
//                 if(isPalindrome(res)){
//                     ans++;
//                 }
//             }
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

bool isPalindrome(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    string temp;
    while(!st.empty()){
        temp+=st.top();
        st.pop();
    }
    if(temp==s)return true;
    return false;
}
int  getMaxSubstrings(char* s,int k){
    string str;
    int i=0;
    while (s[i] != '\0'){
        str+=s[i];
        i++;
    }
    int n=str.size();
    int ans=0;
    for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
            // cout << s.substr(i, len) << endl;
            string res=str.substr(i,len);
            if(res.size()>=k){
                if(isPalindrome(res)){
                    ans++;
                }
            }
        }
    }
    return ans;
}
