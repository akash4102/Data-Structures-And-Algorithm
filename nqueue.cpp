#include <iostream>
using namespace std;

class kQueue{
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freeSpot;
    kQueue(int n,int k){
        this->n=n;
        this->k=k;
        front=new int[k];
        rear=new int[k];
        arr=new int[n];
        next=new int[n];
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    void enqueue(int data,int qn){
        //overflow
        if(freeSpot==-1){
            cout<<"No Empty space is present"<<endl;
            return;
        }
        int index=freeSpot;
        freeSpot=next[index];
        //check whether first index or not
        if(front[qn]==-1){
            front[qn-1]=index;
        }
        else{
            //link new element to the prev element
            next[rear[qn-1]]=index;
        }
        next[index]=-1;
        //update rear
        rear[qn-1]=index;
        arr[index]=data;
    }

    int dequeue(int qn){
        //underflow
        if(front[qn-1]==-1){
            cout<<"queue is underflow"<<endl;
            return -1;
        }
        //find index to pop
        int index=front[qn-1];

        //front ko ange badhao
        front[qn-1]=next[index];
        
        //free slots ko manage kro
        next[index]=freeSpot;
        freeSpot=index;
        return arr[index];
    }

};