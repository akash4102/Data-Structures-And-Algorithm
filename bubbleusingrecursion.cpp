#include <iostream>
using namespace std;

void sortArr(int *arr,int size){
    if(size==0 || size==1)return;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArr(arr,size-1);
}
int main(){
    int arr[5]={52,11,3,4,1};
    int size=5;
   sortArr(arr,size);
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
    return 0;
}