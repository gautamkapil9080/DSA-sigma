// Question 2: Create a class Bank account 
//     Attributes
//     Account number and balance -Private 
//     deposit(),withdraw(),getBalance()- Public

#include<iostream>
using namespace std;
class bankaccount{
    int accountnumber=123445;
    float balance=123.4;
    public:
    void deposit(){
        cout<<"The amount is deposited"<<endl;
    }
    void withdraw(float x){
        cout<<"The"<<x <<"amount with drawned succesfully from the account ";
    }
    void getBalance(){
        cout<<"The amount you have in the bank is "<<balance<<endl;
    }

};
int main()
{
    bankaccount b1;
    b1.getBalance();
    b1.deposit();
    b1.withdraw(12000.12);
 return 0;
}