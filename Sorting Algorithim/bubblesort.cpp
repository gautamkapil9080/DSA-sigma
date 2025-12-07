// Time complexity is O(n square 2 )



#include <iostream>
#include <algorithm> // <-- needed for swap
using namespace std;

void print(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

void sortArray(int* arr,int n){  // renamed from sort()
    bool checksort=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); // now works!
                checksort=true;
            }
            if(!checksort){
                return;
            }
        }
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    sortArray(arr,5);
    print(arr,5);
    return 0;
}
