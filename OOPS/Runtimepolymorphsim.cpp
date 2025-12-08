#include<iostream>
using namespace std;
class Parent{
    public:
    void run (){
        cout<<"Parent method is .....";
    }
};
class child : public Parent{
    public:
    void run(){
        cout<<"Child method is runing";
    }
};
int main()
{
    child object;
    object.run();
 return 0;
}