#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Creating a two dimensional vectors 
    vector<vector<int>>mat={{1,2,3},{2,3,3},{4,5,6}};
    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat.size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
 return 0;
}