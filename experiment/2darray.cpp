#include<iostream>
#include<vector>
using namespace std;

// void printer(int arr[][2],int rowsize,int columnsize){
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<columnsize;j++){
//             cout<<arr[i][j]<<" , "<<endl;
//         }
//         cout<<endl;
//     }
// }
// bool targetno(vector<vector<int>>arr,int target){
//     int rowsize=arr.size();
//     int columnsize=arr[0].size();
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<columnsize;j++){
//             if(arr[i][j]==target)
//             return true;
//         } 
//     }
//     return false;
// }

// int main(){
    // int arr[2][2];
    // int rowsize=2;
    // int columnsize=2;
    // for(int i=0;i<rowsize;i++){
    //     for(int j=0;j<columnsize;j++){
    //         cout<<"enter the element for ("<<i<<","<<j<<") : ";
    //         cin>>arr[i][j];
    //     }
    // }

    // vector<vector<int>>arr(3,vector<int>(3,0));
    //  int rowsize=arr.size();
    //  int columnsize=arr[0].size();
    // int target=1 ;
    // bool ans=targetno(arr,target);

    // cout<<"ans : "<<ans;
    // int rowsize=arr.size();
    // int columnsize=arr[0].size();
    //  for(int i=0;i<rowsize;i++){
    //     for(int j=0;j<columnsize;j++){
    //         cout<<arr[i][j]<<" , ";
    //     }
    //     cout<<endl;
    // }

    // printer(arr,rowsize,columnsize);


    int main(){
        int arr[3][3]={{10,12,11},
                    {100,2,31},
                    {29,39,42}};
         int smallest=INT_MAX;
          int rowsize=3;
          int columnsize=3;
          int sum=0;
          for(int i=0;i<rowsize;i++){
            
            for(int j=0;j<columnsize;j++){
                // if(arr[i][j]<smallest){
                //     smallest=arr[i][j];
                // }
               if(i==rowsize-1 && j==0){
                sum=arr[i][j]+sum
               }
               
               
                if(i==j){
                sum=arr[i][j]+sum;
               }
            }  

          }
                      cout<<"diagonal = "<<sum;

    }