#include<iostream>
#include<algorithm>
using namespace std;

void print(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

void sorting(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){ // Where we are using inner loop to find the smallest number 
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]); // Where we are finding the smallest number and palced at ith index

    }
print(arr,n);
}

int main(){
    int arr[5]={5,4,1,3,2,};
    sorting(arr,5);
}
