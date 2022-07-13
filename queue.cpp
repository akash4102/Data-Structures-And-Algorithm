#include <iostream>
#include <queue>
using namespace std;

// class queue {
// public:
//     int *arr;
//     int Front;
//     int rear;
//     queue() {
//         arr=new int[10000];
//         Front=0;
//         rear=0;
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//        if(rear==Front) return true;
//         return false;
//     }

//     void push(int data) {
//         if(rear!=10000){
//             arr[rear]=data;
//             rear++;
//         }
//     }

//     int pop() {
//         if(rear==Front)return -1;
//         int ans=arr[Front];
//         arr[Front]=-1;
//         Front++;
//         if(Front==rear){
//             Front=0;
//             rear=0;
//         }
//         return ans;
//     }

//     int front() {
//         if(Front==rear)return -1;
//         return arr[Front];
//     }
// };
int main(){
    // queue<int>q;
    // queue q;
    deque<int>q;
    q.push_back(10);
    q.push_back(15);
    q.push_back(17);
    q.push_back(12);
    q.push_front(19);
    // cout<<q.size()<<endl;
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // cout<<q.size()<<endl;
    return 0;
}