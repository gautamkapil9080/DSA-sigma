#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *apointer=&a;
    cout<<apointer<<endl;
    cout<<*apointer<<endl; // Dereferencing operator where we will get the value of the pointer.
    cout<<apointer+3<<endl;
 return 0;
}