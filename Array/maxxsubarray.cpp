#include<iostream>
using namespace std;

void maxsubarray(int *arr,int n){
    for(int start=0;start<n;start++){ // Outer loop 

        for(int end=start;end<n;end++){ // Second loop for the number 012345 example
            int currentsum=0;

            for(int i=start;i<=end;i++){
                currentsum+=arr[i];
            }
            cout<<currentsum;
            cout<<endl;
            
        }
        
    }
}





int main()
{
    int arr[6]={1,2,3,4,5,6};
maxsubarray(arr,6);
 return 0;
}