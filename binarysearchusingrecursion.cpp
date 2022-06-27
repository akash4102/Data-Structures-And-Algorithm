#include <iostream>
using namespace std;


bool search(int *arr,int start,int end,int key){
    if(start>end)return false;
    int mid=(start+end)/2;
    if(arr[mid]==key)return true;
    if(arr[mid]>key) return search(arr,start,mid-1,key);
    return search(arr,mid+1,end,key);  
}
int main(){
    int arr[]={24,4,6,12,25,17};
    int size=6;
    cout<<search(arr,0,size-1,27)<<endl;
    return 0;
}