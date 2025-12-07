// Take a example of an array of Character and sort it 
//                                |

#include<iostream>
#include<algorithm>
using namespace std;

void print(char *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void slectionsortt(char *arr,int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    print(arr,n);
}

int main(){
    char arr[5]={'f','b','a','c','d'};
    slectionsortt(arr,5);
}