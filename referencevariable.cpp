#include "bits/stdc++.h"
using namespace std;

// void upadate(int &n){
//     n++;
// }

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    // int i=5;
    //create reference variable
    // int &j=i;
    // cout<<i++<<endl;
    // cout<<j++<<endl;
    // cout<<i++<<endl;
    // int n=5;
    // cout<<n<<endl;
    // upadate(n);
    // cout<<n<<endl;

    int n;cin>>n;
    //good way to allocate memory
    int *arr= new int[n];
    //bad way to allocate memory
    // int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=getsum(arr,n);
    cout<<sum<<endl;
    return 0;
}