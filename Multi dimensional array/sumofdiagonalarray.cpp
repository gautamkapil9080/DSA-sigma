// This is taking time of 0(N^2)


#include<iostream>
using namespace std;

void Sumarray(int arr[][3],int n,int m){
    int sum=0;
    
    for(int i=0;i<n;i++){ // Vertical that means rows 

        for(int j=0;j<n;j++){ // Horizantal that means it is columns
            
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j=n-1-i){
                sum+=arr[i][j];
            }

        }

    }
    cout<<"sum"<<sum;
    return sum;
}

int main(){

    int arr[3][3]={ {1,2,3},
              {4,5,6}, 
              {7,8,9}};
Sumarray(arr,3,3);

}