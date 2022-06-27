#include <iostream>
using namespace std;


bool isexist(int arr[],int size,int target){
    if(size==0)return false;
    if(arr[0]==target)return true;
    return isexist(arr+1,size-1,target);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<isexist(arr,size,25)<<endl;
    return 0;
}