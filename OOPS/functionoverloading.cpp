#include<iostream>
using namespace std;
#include<string>
class Print{
    public:
    void kapil(string name,int x){
        cout<<"This is the example of compile time polymorphism : Function overloading"<<endl;
    
    }
   void kapil(string name){
        cout<<"This is the example of compile time polymorphism : Function overloading"<<endl;
    
    } 
}
int main()
{
    Print ob1;
    ob1.kapil("Kapil",10); // Calling 1st method
    ob1.kapil("Kapil");// Calling second method
 return 0;
}