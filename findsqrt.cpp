#include <iostream>
using namespace std;

int sqrtInterger(int n){
    long long int start=0,end=n;
    if(n==0 || n==1)return n;
    while(start<=end){
        long long int mid=start+(end-start)/2;
        if(mid*mid<=n and (mid+1)*(mid+1)>n) return mid;
        if(mid*mid < n) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
double morePrecision(int n,int precision,int tempsol){
    double ans=tempsol;
    double factor=1;
    for(double i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    int tempsol=sqrtInterger(n);
    cout<<"Answer is "<< morePrecision(n,3,tempsol)<<endl;
    return 0;
}