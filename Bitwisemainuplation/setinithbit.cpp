// We will just do one thing make the 0-1 set
//                                    1-1 As as it is 
#include<iostream>
using namespace std;
int set(int num,int i){
   int  maskbit=1<<i;
   return (maskbit|num);


}
int main()
{
   int a= set(5,3);
   cout<<a;
 return 0;
}