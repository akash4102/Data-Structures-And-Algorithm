#include "bits/stdc++.h"
using namespace std;

void generatesubset(int *arr,int n){
    for(int i=0;i<=pow(2,n);i++){
        for(int j=0;j<=n-1;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return;
}
int main(){
    int arr[]={10,20,30};
    int n=3;
    generatesubset(arr,n);
}