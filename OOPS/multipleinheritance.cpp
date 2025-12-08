// Multiple Inheritnace 

#include<iostream>
#include<string>
using namespace std;

// Base class
    class Teacher{
        public:
        string subject;
        int salary;
    };

    // Base class 
    class student{
        public:
        int rollno;
        float cgpa;
    };
    
    // Derived class 
    class Ta:public Teacher,public student{
        public:
        string dept;
    };
int main()
{
    Ta obj;
    obj.rollno=234546;
    obj.cgpa=7.8;
    obj.dept="Data Scinece";
    obj.subject="Research";
    obj.salary=190000;

   cout<< obj.rollno;
    cout<<obj.cgpa;
   cout<< obj.dept;
   cout<< obj.subject;
   cout<< obj.salary;
    
 return 0;
}   