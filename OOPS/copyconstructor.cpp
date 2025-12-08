// Default copy constructor : 


#include<iostream>
using namespace std;
class kapil{
    public:
    string name ;
    int age;
    string sex;
// Constructor 
kapil(string name,int age,string sex){
    this->name=name;
    this->age=age;
    this->sex=sex;
}
};
int main()
{
    kapil s1("Kapil",20,"male");
    kapil s2(s1);// passing the whole object ( Default copy constructor)
                // Which is automatticaly done by the cpp
    cout<<s2.name;
    cout<<s2.age;
    cout<<s2.sex;
 return 0;
}