#include <iostream>
// #include "Hero.cpp"
using namespace std;


class Hero{
    // char name[100];
    int health;
    public:
    char *name;
    int level;
    static int timeToComplete;

    Hero(){
        cout<<"constructor called"<<endl;
        name=new char[100];
    }
    // Hero(){
    //     cout<<"default constructor called"<<endl;
    // }
    // Hero(int health,int level){
    //     // cout<<"this->"<<this<<endl;
    //     this->level=level;
    //     this->health=health;
    // }
    void print(){
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }

    //copy constructor
    Hero(Hero& temp){
        cout<<"copy consturctor"<<endl;
        char *ch=new char[sizeof(temp.name)+1];
        ch=temp.name;
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }
    int getHealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void setname(char name[]){
        this->name=name;
    }
    void setHealth(int h){
        health=h;
    }
    void setlevel(int k){
        level=k;
    }
    static int random(){
        return timeToComplete;
    }
    ~Hero(){
        cout<<"destructor called"<<endl;
    }

};

int Hero::timeToComplete=5;
int main(){
    cout<<Hero::random()<<endl;
    // cout<<Hero::timeToComplete<<endl;
    // Hero a;
    // cout<<a.timeToComplete<<endl;






















    //static
    // Hero a;

    // //dynamic allocation;
    // Hero *b=new Hero();
    // //manually destructor call
    // delete b;
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setlevel(5);
    // char name[7]="Babbar";
    // hero1.setname(name);
    // hero1.print();

    // Hero hero2(hero1);
    // hero2.print();
    // cout<<endl;
    // hero1.name[0]='G';
    // hero1.print();
    // hero2.print();
    // Hero hero2=hero1;
    // Hero suresh;
    // suresh.setHealth(10);
    // suresh.setlevel(7);
    // suresh.print();

    //copy constructor
    // Hero Ramesh(suresh); // way to copy one object to another object;
    // Ramesh.print();
    //static allocation
    // Hero h1;
    // //dynamic allocation
    // Hero *h2=new Hero;
    // cout<<h2->level<<endl;
    // //alternate method
    // cout<<(*h2).level<<endl;
    // h1.setHealth(10);
    // cout<<sizeof(h1)<<endl;
    // // cout<<h1.health<<endl;
    // cout<<h1.getHealth()<<endl; 
    // cout<<h1.level<<endl;


    //object create statically
    // Hero ramesh(10,6);
    // cout<<"address of ramesh "<< &ramesh<<endl;
    // cout<<ramesh.getHealth()<<endl;
    // Hero *suresh=new Hero;
    // cout<<ramesh.getHealth()<<endl;

    return 0;

}