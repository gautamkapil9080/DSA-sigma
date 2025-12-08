#include<iostream>
using namespace std;
class student{
    public:
    int name;
    int age;
    int *adr;

student(int name,int age){
    this->name=name;
    this->age=age;
    adr=new int ; // Dynamically we are allocating the memmory of the adr
    *adr=10;
}
~student(){ // Destructor 
    cout<<"Deleting";
        delete  adr;
    }

    };
int main()
{
student obj(20,25);
student ob2=(obj);
*ob2.adr=20;
//It is important to give value in the pointer we need to give *
cout<<*ob2.adr;
cout<<*obj.adr;
 return 0;
}