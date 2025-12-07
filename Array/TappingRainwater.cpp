#include<iostream>
using namespace std;

void tapped(int *height,int n){
    int leftmax[1000],int rightmax[1000];
 // cannot create array of size n dynamically leftmax[n].. Not possible
leftmax[0]=height[0];
rightmax[n-1]=height[n-1];
for(int i=1;i<n;i++){
    leftmax[i]=max(leftmax[i-1],height[i-1]);
}
for(int i=n-2;i>=0;i--){
    rightmax[i]=max(rightmax[i+1],height[i+1]);
}

int watertapped=0;
for(int i=0;i<n;i++){
    int currWater=min(leftMax[i],rightMax[i]-heights[i]);
    if(currWater>0){
        watertapped+=currWater;
    }
}
cout<<"Water Trapped="<<watertapped<<endl;
return watertapped;
}

int main()
{
    int height[7]={4,2,0,6,3,2,5};
    tapped(height,7);
    
 return 0;
}
