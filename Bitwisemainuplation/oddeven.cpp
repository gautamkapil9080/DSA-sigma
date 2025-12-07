#include<iostream>
using namespace std;
void  oddeven(int num){
    if((num & 1)==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}
int main()
{
oddeven(11);
 return 0;
}


