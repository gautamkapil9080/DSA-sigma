// Write a function to check if a number is a palindrome in C++.(121isapalindrome,321isnot)
 

#include<iostream>
using namespace std;
int pal(int num){
int rev=0;
while(num!=0){
    int rem=num%10;       
    num=num/10;
    rev=rev*10+rem;
}
return rev;
}
int main(){
    int x;
x=pal(321);
cout<<x;

}