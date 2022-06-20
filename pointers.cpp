#include <iostream>
using namespace std;

void update(int **p){
    p=p+1;
    *p=*p+1;
    **p=**p+1;
}
int main(){
    // int arr[10];
    // cout<<*arr<<endl;
    // cout<<arr[0]<<endl;
    // int i=9 ;
    // cout<<i[arr]<<endl;
    // cout<<arr[i]<<endl;

    // char ch[6]="abcde";
    // cout<<ch<<endl;
    // char *c=&ch[0];
    // cout<<c<<endl;
    // char temp='z';
    // char *p=&temp;
    // cout<<p<<endl;

    //  int i=5;
    //  int*p=&i;
    //  int **p2=&p;
    // //  cout<<p<<endl;
    // //  cout<<p2<<endl;
    // //  cout<<*p<<endl;
    // //  cout<<*p2<<endl;
    // update(p2);

    

    return 0;
}