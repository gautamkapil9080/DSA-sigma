// X X X X X 
// X       X
// X       X 
// X X X X X 
//  Q.Print this pattern 
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i!=1||i!=4){
                cout<<"X"+" "+" "+" "+"X";
            }
            else{
                cout<<"X"+" "+" "+" "+"X";
            }
        }
    }
 return 0;
}
