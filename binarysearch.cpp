#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=9;
    int start=0;
    int end=sizeof(arr)/sizeof(int)-1;
    while(start<=end){
        int mid=(start+end)/2;
       // int mid = start+ (end - start)/2;
        if(arr[mid]==key) cout<<mid<<endl;
        if(arr[mid]<key) start=mid+1;
        else end=mid-1;
    }
    cout<<-1<<endl;
    return 0;
}
