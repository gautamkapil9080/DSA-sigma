#include<iostream>
using namespace std;
int main()
{
    float f=10.20;
    float *ptr=&f; // Where it is a type of pointer 
    
    // Pointer to pointer 
    float **pptr=&ptr;
    cout<<*pptr;
 return 0;
}