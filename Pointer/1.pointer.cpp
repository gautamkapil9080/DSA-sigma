#include<iostream>
using namespace std;
int main()
{
    int a=100; // a is the variable of type of int so we need to create a pointer which will store value of int 
    int *ptr=&a; // where '&' this operator access only adress 
    cout<<&ptr<<endl; // Print the adress of the pointer 
    cout<<*ptr; //print the value of the adress of the pointer 
 return 0;
}