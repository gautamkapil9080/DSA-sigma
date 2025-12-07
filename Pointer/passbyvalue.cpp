// Remember that in the pass by value the varibale will make copy and pass it 

#include<iostream>
using namespace std;
int changeA(int x){
    cout<<"Before change"<<x<<" ";
    x=10;
    cout<<x<<" ";
}
int main()
{
    int a=100;
    changeA(a);
    cout<<"The main value"<<a;
 return 0;
}