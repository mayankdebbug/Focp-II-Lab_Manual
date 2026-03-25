#include<iostream>
using namespace std;


int main(){
//     int size;

// cout<<"the size of array: ";
//     cin>>size;

    int nums[10];
    
    
    for(int i=0;i<10;i++){
        cout<<"enter number "<<i<<" : "<<endl;
        cin>>nums[i];
    
    }
    int target;
    cout<<"target: ";
    cin>>target;
    for(int j=0;j<10;j++){
        for(int x=0;x<10;x++){
int sum;
sum=nums[j]+nums[x];
            if(sum==target){
             cout<<"["<<j<<","<<"]";
             break;
            }
        }
    }
    
}