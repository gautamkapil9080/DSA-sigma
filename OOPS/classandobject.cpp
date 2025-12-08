#include<iostream>
using namespace std;
// Create a class 
class User{
    string id;
    public:
    string name;
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

    

    };
    int main(){
        User kapil; // Create the object having the name kapil from the User class 
        cout<<kapil.id; // We cannot even the print the value.
        kapil.id="kapilgautamoffical"; // We cannot change the value of the id 
        kapil.name="Kapilgautam";
        kapil.deactivate(123,341);
        kapil.names("itsmekapilgautam");
        cout<<kapil.id;
        cout<<kapil.name;
    }
