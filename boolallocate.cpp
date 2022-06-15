#include "bits/stdc++.h"
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else {
            studentcount++;
            if(studentcount >m || arr[i]>mid)return false;
            pagesum=arr[i];
        }
    }
    return true;
}
int main(){
    int arr[]={10,20,30,40};
    int m=2,n=4;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0,end=sum;
    int ans=-1;
    while(start<=sum){
        int mid=(start+mid)/2;
        if(ispossible(arr,n,m,mid)) {
            ans=mid;
            end=mid-1;
        }
        else start=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}