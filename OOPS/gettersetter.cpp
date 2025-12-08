#include<iostream>
#include<string>
using namespace std;
class User{
    string id;
    string name;
    public:
    void deactivate(int pass,int pvpass){
        if(pass==pvpass){
            cout<<"Account Remove Succesfully"<<endl;
        }
        else{
            cout<<"Not matched passwords"<<endl;
        }
    }
    void names(string name){
        cout<<"The name change to"<< name<<" " <<"From previously one "<<endl;
    }

    void setid(string name ){ // This is the setter which will set the value and donot give access directly
        id=name;
    }
    void setnames(string s){
        name=s;
    }
    // getter : To access the value which we have set it.

    string getid(){
        return id;
    }
    string getname(){
        return name;
    }

    };

int main()
{
    User kapil;
    string x;
    // kapil.id="kapilgauta" // It is showing an error which mean that it is private we cannot access it so using the "setter and getter" method. 
    kapil.setname("kapil");
   x=kapil.getname();
   cout<<x;
 return 0;
}