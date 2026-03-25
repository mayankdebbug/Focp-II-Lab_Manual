#include<iostream>
using namespace std;

void pairs(int arr[],int size,int target){
     for(int i=0;i<size;i++)
     for(int j=i;j<size;j++){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<","<<arr[j]<<endl;
            break;
        }
        else(cout<<"pair not found");
     }

}

int main(){
    int target;
    cout<<"enter the target nigga: ";
    cin>>target;

    int arr[]={1,2,3,4,5,6,7,8,9};
     int size=9;

     pairs(arr,size,target);




}