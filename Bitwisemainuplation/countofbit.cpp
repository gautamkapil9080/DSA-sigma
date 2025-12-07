#include<iostream>
using namespace std;
int count(int num){
    int count=0;
    while(num>0){
        int lastdigit=num&1;
        count=count+lastdigit;
        num=num>>1;
    }
    return count;
}

int main()
{
    int x=count(10);
    cout<<x;
 return 0;
}   