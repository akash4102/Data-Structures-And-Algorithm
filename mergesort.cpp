#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second= new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len1;i++){
        second[i]=arr[k++];
    }
    //merge
    int index1=0,index2=0,mainArrindex=s;
    while(index1<len1 and index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrindex++]=first[index1++];
        }
        else{
            arr[mainArrindex++]=second[index2++];
        }
    }
    while (index1<len1)
    {
        arr[mainArrindex++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrindex++]=second[index2++];
    }
    delete []first;
    delete[]second;
    

}
void mergesort(int arr[],int s,int e){
    if(s>=e)return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[]={38,27,43,3,9,82,10};
    int size=7;
    // cout<<"working"<<endl;
    mergesort(arr,0,size-1);
    // cout<<"working"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}