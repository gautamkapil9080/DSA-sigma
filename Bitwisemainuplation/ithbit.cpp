#include<iostream>
using namespace std;
void ith(int num,int i){
    int maskbit=1<<i;
    if((num&maskbit)){
        cout<< "1";
    }
    else{
        cout<<"0";
    }
}
int main()
{
ith(6,2);
 return 0;
}