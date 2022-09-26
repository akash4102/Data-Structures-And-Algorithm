#include <iostream>
using namespace std;


int gcd(int a,int b){
    if(a==0)return b;
    if(b==0) return a;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main(){
    int a,b;cin>>a>>b;
    int ans=gcd(a,b);
    //cout<<ans<<endl;
    return 0;
}
