// Subarray of the array arr[5]={1,2,3,4,5}= 1,12,123,1234,12345
//                                              2,23,234,2345
//                                              3,34,345
//                                              4,45
//                                              5
#include<iostream>
using namespace std;

void Arrayfunction(int*arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            cout<<start<<end;
        }
        cout<<endl;
        }
    }





int main(){
    int arr[5]={1,2,3,4,5};
    Arrayfunction(arr,5);
    return 0;
}