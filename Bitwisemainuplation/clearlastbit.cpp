#include<iostream>
using namespace std;
 int clearlast(int num,int i){
    int bitmask=~0<<i;
    return(bitmask&num);
}
int main()
{
 int a=clearlast(10,2);
 cout<<a;
 return 0;
}