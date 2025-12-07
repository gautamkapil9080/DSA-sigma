// Write a function that accepts a character(ch) as parameters & returns the character that occurs after chinthe Englishalphabet.Eg:input=‘c’,return value=‘d’Note:forch=‘z’,return‘a’.

char alp(char ch){
    if(ch=='z'){
        return 'a';
    }
    else{
        return ch+1;
    }
}
#include<iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    char output=alp(x);
    cout<<output;
}