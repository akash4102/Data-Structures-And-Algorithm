#include "bits/stdc++.h"
using namespace std;

bool isPossible(int arr[],int k,int n,int mid){
    int cowcnt=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            cowcnt++;
            if(cowcnt==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3};
    int n=3,k=2;
    int start=0;
    int maxi=-1;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
        mini=min(arr[i],mini);
    }
    int end=maxi-mini;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(isPossible(arr,k,n,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}