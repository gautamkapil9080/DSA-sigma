#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
    void breathe(){
        cout<<"Breathing..."<<endl;
    }
};
class Bird:public Animal{
    public:
    void fly(){
        cout<<"Bird is Flying.."<<endl;
    }
};
class Fish:public Animal{
    public:
    string fin;
    void swim(){
        cout<<"The fish can swim"<<endl;
    }   
};
int main()
{
 return 0;
}