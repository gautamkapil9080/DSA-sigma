    //   x   
    //   x x  
    //   x x x 
    //   x x x x
// Make the pattern of this given upper 


#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++){
         // For a Outer loop
for(int j=1;j<=n-i;j++){
cout<<"X";}
for(int j=1;j<=i;j++){
    cout<<" ";
}
cout<<endl;
    }
 return 0;
}