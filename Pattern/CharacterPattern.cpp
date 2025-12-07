// Question:

// A 
// B C 
// D E F 
// G H I J

#include<iostream>
using namespace std;
int main()
{
    char ch='z';
 for(int i=1;i<=4;i++){
    for(int j=4;j>=i;j--){
        cout<<ch;
        ch--;
    }
    cout<<endl;
 }
    return 0;
}