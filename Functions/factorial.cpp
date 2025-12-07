int  fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}



#include<iostream>
using namespace std;
int main()
{
    int x=fact(3);
    cout<<x;

 return 0;
}