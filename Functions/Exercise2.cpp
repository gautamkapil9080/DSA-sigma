// Write a function which takes 2 numbers as parameters(a&b) and outputs:a^2+b^2+2*ab

#include<iostream>
using namespace std;
int quad(int a,int b,int c){
    int result;
    result=(b*b)-4*a*c;
    return result;
}
int main()
{
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
int value=quad(a,b,c);
cout<<value;
 return 0;
}