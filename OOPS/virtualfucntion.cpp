#include<iostream>
using namespace std;
class parent{ // When we have used the virtual keywords then we can redefined this in the child class
    public:
    virtual void method(){
        cout<<"This call has been called by the parent"<<endl;
    }
};
class son : public parent {
    public:
    void method(){ // No need of the virtual keyword for this inside.
        cout<<"This called has been called from the son"<<endl;
    }
};
int main()
{
    son ob1;
    ob1.method(); // this method was called for the son 
    
    // lets approach another method 
    // create a class pointer and assigned the value to the object and acces the method 
    parent *ptr;
    ptr=&ob1; //Where we have the access of the memory to the ob1 
    ptr->method();// This will also called the method from the son 
    parent ob2 ;
    ob2.method();// This method was also called from the parents 
    
    

 return 0;
}