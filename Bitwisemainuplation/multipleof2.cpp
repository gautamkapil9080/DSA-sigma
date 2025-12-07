#include<iostream>
using namespace std;
int  mul(int num){
    if((num&num-1)==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int x=mul(32);
    cout<<x;
 return 0;
}