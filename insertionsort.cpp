#include <iostream>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;i>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else break;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}