#include<iostream>
using namespace std;
class hostel{
    public:
    int number;
    int room;
    string name;
    int *adress;
    hostel(int number,int room,string name){
        this->number=number;
        this->room=room;
        this->name=name;
        adress=new int; // it is class memeber
        *adress=10;
    }
    // Copy constructor ( deep copy ko lagi use garxam) 
    hostel(hostel & orginal){
        cout<<"value start copyinh";
        number=orginal.number;
        room=orginal.room;
        name=orginal.name;
        int *adress
        *adress=10;
    }
};

int main()
{

 return 0;
}