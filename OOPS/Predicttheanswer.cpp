#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"The parent constructor will be called first"<<endl;

    }
    ~A(){
        cout<<"The parent destructor will be called at the last"<<endl;
    }
};
class B:public A {
    public:
    B(){
        cout<<"The Child constructor will be called secondly"<<endl;

    }
    ~B(){
        cout<<"The parent destructor will be called after the end of the child class constructor"<<endl;
    }
    
};
int main()
{
    B ob1;

 return 0;
}
