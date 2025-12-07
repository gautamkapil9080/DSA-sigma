#include<iostream>
using namespace std;
#include<vector>

vector<int>pairsum(vector<int>arr,int target){
    int st=0,end=arr.size()-1,sum=0;
    vector<int>ans;
    while(st<end){
        sum=arr[st]+arr[end]; // We can acces this easily in the simple
        if(sum==target){
            ans.push_back(st);
            ans.push_back(end);
            break;
        }
        else if(sum<target){
            st++;
        }
        else{
            end--;
        }

    }
    return ans;
}
int main()
{
    vector<int>mat={2,7,11,15};
    int target=9;
    vector<int>temp=pairsum(mat,target);
    cout<<temp[0] <<" "<<temp[1];
 return 0;
}

