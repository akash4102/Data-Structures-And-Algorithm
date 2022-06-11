#include <iostream>
using namespace std;


bool search(int arr[],int key){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10]={1,2,3,4,5,6,6,7,10,12};
    int key;cin>>key;
    bool find=search(arr,key);
    if(find){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}