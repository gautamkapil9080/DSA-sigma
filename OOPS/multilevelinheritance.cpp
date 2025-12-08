#include<iostream>
using namespace std;
// base class 

class Animal{
    public:
    void breathe(){
        cout<<"Breathing......"<<endl;
    }
    void eat(){
        cout<<"eating....."<<endl;
    }
};
// Derived class 

class mamals:public Animal{
    public:
    string bloodtype;
};

class dog:public mamals{
    public:
    void tail(){
        cout<<"tail......"<<endl;
    }
};
int main()
{
    class dog d;
    d.bloodtype="Warm";
    cout<<d.bloodtype<<endl;
    d.tail();
    d.eat();
    d.breathe();
 return 0;
}