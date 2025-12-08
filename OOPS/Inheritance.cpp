#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
    string color;
    void eat(){
        cout<<"eating...."<<endl;
    }
    void breathe(){
        cout<<"hm......."<<endl;
    }
};
class fish:protected animal{
    public:
    int fin;
    string type;
    void swim(){
        cout<<"Swimming...."<<endl;
    }
};
int main()
{
    // Lets create an object and try to access it. 
    class fish f1;
    // f1.breathe();
    // f1.color="black"; // Where the breathe,color,eat are the method of the (Parent class/ base class) so i will put 
    //                   // Check by putting the private and protected
    // f1.eat();
    f1.fin=10; // We can acces this outside the method becuase it is public if it is protected we cannot access this 
    f1.swim();
    // cout<<f1.color<<endl;
    cout<<f1.fin;
 return 0;
}