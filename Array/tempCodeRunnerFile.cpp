


// 1 2 3 4 -5

#include<iostream>
using namespace std;     
void maxSub(int *arr,int n){             
    int currsum=0; // 
    int Maxsum=INT_MIN; // 
    for(int i=0;i<n;i++){  // i=4
     currsum+=arr[i];   // 5 
     Maxsum=max(currsum,Maxsum);// Maxsum=10
     if(currsum>0){
        currsum=0;
     }
    }


}
int main()
{
    int arr[5]={1,2,3,4,-5};
    maxSub(arr,5);
 return 0;
}