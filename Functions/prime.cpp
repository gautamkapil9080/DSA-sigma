#include<iostream>
using namespace std;
void prime(int num){
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            cout<<"Not
            break;
        }
        else{
            cout<<"composite";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);

 return 0;
}