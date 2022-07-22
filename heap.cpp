#include "bits/stdc++.h"
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size+=1;
        int index=size;
        arr[index]=val;
        while (index>1)
        {
           int parent=index/2;
           if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
           }
           else  return;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deletefromHeap(){
        // check element is in range
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        // put last element into first index
        arr[1]=arr[size];
        // remove last index
        size--;
        // take root node ot its correct position
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex<size and arr[i]<arr[leftIndex]){
                swap(arr[1],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size and arr[i]<arr[rightIndex]){
                swap(arr[1],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }

    }
};

void heapify(int *arr,int size,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=size and arr[largest]<arr[left]){
        largest=left;
        // swap(arr[largest],arr[left]);
    }
    if(right<=size and arr[largest]<arr[right]){
        largest=right;
        // swap(arr[largest],arr[right]);
    }
    if(largest!=i){
        // cout<<arr[largest]<<" "<<arr[i]<<endl;
        swap(arr[largest],arr[i]);
        // cout<<arr[largest]<<" "<<arr[i]<<endl;
        heapify(arr,size,largest);
    }
}
void heapSort(int *arr,int n){
    int size=n;
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);
    }
}

int main(){
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(54);
    // h.insert(52);
    // h.deletefromHeap();
    // h.print();
    // int arr[6]={-1,54,53,55,52,50};
    // int n=5;
    // for(int i=n/2;i>0;i--){
    //     heapify(arr,n,i);
    // }
    // cout<<"printing the array now"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // heapSort(arr,n);
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    //using priority queue
    // priority_queue<int>pq;
    // pq.push(4);
    // pq.push(2);
    // pq.push(3);
    // pq.push(5);
    // cout<<"element at top"<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int>>minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(5);
    cout<<"element at top"<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<minHeap.top()<<endl;
    return 0;
}