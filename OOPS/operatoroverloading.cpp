#include<iostream>
using namespace std;

class complex{
    public: 
    int real; 
    int img;
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void show(){
        cout<<real<<"+" <<img <<"i "<<endl;
    }
    void operator + (complex &c2){
        int resreal=this->real+c2.real;
        int resimg=this->img+c2.img;
        // Create a c3 complex object and add the value and store it 
        complex c3(resreal,resimg);
        c3.show();
    }
};
int main()
{
    complex c1(10,20);
    complex c2(9,15);
    c1.show();
    c2.show();
    c1+c2;
 return 0;
}