// Pass the array name it will acts as pointer
#include<iostream>
using namespace std;

// Change the value of array with the Pass by Reference or we can say 
// passing the name of the array
void change(int arr[]){ // It will take the value of an array
    arr[0]=99; // Change the value of an array
}

int main()
{
    int array[4]={100,20,34,56};
    change(array); // Pass the name of the array
    cout<<array[0]; // It will print 99 Becuase we are passing name which will acts as the adress
 return 0;
}
