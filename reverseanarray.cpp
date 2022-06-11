#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0,j=9;
    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}