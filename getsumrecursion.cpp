#include <iostream>
using namespace std;

int getsum(int arr[], int size,int sum){
    if(size==0)return sum;
    else return getsum(arr+1,size-1,sum+arr[0]);

}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<getsum(arr,size,0)<<endl;
    return 0;
}