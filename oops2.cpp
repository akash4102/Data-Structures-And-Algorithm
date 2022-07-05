#include <iostream>
using namespace std;

// class Human{
//     public:
//     int height;
//     int weight;
//     // private: 
//     int age;
 
//     public: 
//     int getAge(){
//         return this->age;
//     }
//     void setWeigth(int w){
//         this->weight=w;
//     }
// };

// class Male: public Human{
//     public:
//     string color;

//     void sleep(){
//         cout<<"male is always sleeping"<<endl;
//     }
// };

// class A{
//     public:
//     void sayHello(){
//         cout <<"hello love babbar"<<endl;
//     }
//     int sayHello(int n){
//         cout <<"hello love babbar"<<endl;
//         return n;
//     }
//     void sayHello(string name){
//         cout<<"hello "<<name<<endl;
//     }
// };

class B{
    public: 
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+ (B&obj){
        // int value1=this->a;
        // cout<<value1<<endl;
        // int value2=obj.a;
        // cout<<value2<<endl;
        // cout<<"output "<< value2-value1<<endl;
        cout<<"hello akash"<<endl;
    }
    void operator() (){
        cout<<"main bracket hoo"<< this->a<<endl;
    }
};

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    public: 
    // void speak(){
    //     cout<<"barking"<<endl;
    // }
};


int main(){
    Dog b;
    b.speak();
    // B obj1,obj2,obj3;
    // obj1.a=4;
    // obj2.a=7;
    // obj3.a=15;
    // obj1+obj2;
    // obj1();
    // A obj;
    // obj.sayHello();
    // obj.sayHello("akahs");
    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.color<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // object1.sleep();
    // object1.setWeigth(10);
    // cout<<object1.weight<<endl;
    return 0;
}