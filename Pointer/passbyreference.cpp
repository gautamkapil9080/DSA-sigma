// Where it will change the value of original where we will give argumnet 

#include<iostream>
using namespace std;
int changeA(int*ptr){
    *ptr=12345;
}
int main()
{
int a=100;
changeA(&a);// We will pass the adress of 100. 
cout<<"After change is "<<a;
 return 0;
}