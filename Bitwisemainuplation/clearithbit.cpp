#include<iostream>
using namespace std;
int clearbit(int num,int i){
    int bitmask=~(1<<i);
    return (num&bitmask);
}
int main()
{
    int a=clearbit(6,1);
    cout<<a;
 return 0;
}