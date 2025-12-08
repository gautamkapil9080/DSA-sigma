#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    int roll;
    string name;
    int *adress;
Student(int age,int roll,string name){
    this->age=age;
    this->roll=roll;
    this->name=name;
    adress=new int ; // allocating the memory dynamically to this 
    *adress=10;

}
};
int main()
{
    Student s(10,100,"kapil");
    Student s1(s);
    cout<<s1.age;
    cout<<s1.roll;
    cout<<s1.name;
    *s1.adress=20;
    cout<<s.adress; // Where the value will be change as compared to pervious one 
    cout<<s1.adress;
 return 0;
}