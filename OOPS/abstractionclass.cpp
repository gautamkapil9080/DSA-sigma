// abstraction class : mean those type of class which contains the pure virtual function
// Pure Virtual Function : Those type of function defined by the virtual keyword and it is equal 
// to zero 
//        for example : virtual void draw();=0;


#include<iostream>
using namespace std;
class shapedrawing {
    public:
    virtual void draw(); // This is the virtual function or we can say abstraction function
                        // Which is further redefined and completetd inside the inherited class
};
class oval:public shapedrawing{
    public:
    void draw(){
        cout<<"Oval is drwaing";
    }
};
int main()
{
    oval o1;
    o1.draw();
 return 0;
}
