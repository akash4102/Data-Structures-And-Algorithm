#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7,8,9,1,2,3};
    int s=0;
    int e=sizeof(arr)/sizeof(int);
    while (s<e)
    {
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
    }
    cout<<s<<endl;
    return 0;
}