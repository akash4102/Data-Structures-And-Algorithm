#include <iostream>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]) minimum=j;
        }
        swap(arr[i],arr[minimum]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}