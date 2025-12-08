// Static object ma chai k hunxa vana yedi hamro code chai sabai complete hunxa ball hamro object 
// out of scope hunxa ( thats mean destructor run hunxa)

#include<iostream>
using namespace std;
class Student{
    public:
    int x;
    Student(){
        cout<<"Constructot"<<endl;
    }
    ~Student(){
        cout<<"destructor";
    }
};
int main()
{
    int x=0;
    if(x==0){
         static Student ob1;
    }
    cout<<"program is runnin";
    
 return 0;
}
