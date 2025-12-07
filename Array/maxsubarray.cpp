#include<iostream>
using namespace std;

void maxsubarray(int *arr,int n){
    for(int start=0;start<n;start++){ // Outer loop 

        for(end=start;end<n;end++){

            cout<<end;
        }
        cout<<endl;
    }
}





int main()
{
    int arr[6]={1,2,3,4,5,6};
maxsubarray(arr,6);
 return 0;
}