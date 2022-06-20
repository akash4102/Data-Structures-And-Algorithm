#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int **arr= new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //taking output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //relesing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}