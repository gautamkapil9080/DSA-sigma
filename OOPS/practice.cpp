// # Problem set 1 : 
//     Create a class to store complex numbers Using the Operator Overloading create the logic to subraction one complex number 
//     to another

#include<iostream>
using namespace std;
class complex {
    public: 
    int real ;
    int img;
    complex(int real,int img){
        this->real=real;
         this->img=img;
    }
    void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void operator -(complex &c2){ // C1-c2 means it will take the c1 as the recent object: so we take the c1 for (this)
        int resultofreal=this->real-c2.real;
        int resultofimg=this->img-c2.img;
        // call the object and store the value in the c3 
        complex c3(resultofreal,resultofimg); // Object will be formed of c3
        c3.print();
    }
};
int main()
{
    complex c1(13,4);
    complex c2(17,4);
    c1.print();
    c2.print();
    c1-c2;
 return 0;
}