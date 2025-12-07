#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={1,2,3,4};
    cout<<v1.size()<<endl;
    cout<<v1.capacity() <<endl;
    v1.push_back(10); // Where the push back is to add element int the last

    cout<<v1.size()<<endl; 
    cout<<v1.capacity();
    v1.pop_back();// It will remove the last elements;
 return 0;
}