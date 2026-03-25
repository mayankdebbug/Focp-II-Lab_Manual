#include<iostream>
using namespace std;

// int single(int arr[],int size){
//     int i,j,n=0;
//     for(i=0;i<size;i++){
//      for(j=arr[size-1];j>=0;j--){

//     if(arr[i]==arr[j]){
//         continue;
//     }
//     else{n=arr[i];}
//      }
//     }
//     return n;
    
// }

int number(int arr[],int size){

    int i,j;
    int ans=0;

    for(i=0;i<size;i++){
     
        for(j=1;j<size;j++){
            // if(i==j){
            // continue;}

            if(arr[i]==arr[j]){
                continue;
                
                
            }
            ans=arr[i];
            // else{ 
            //     ans=arr[i];
            // }


        }
    }
    return ans;
}

int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,5,122222,54,54,56,56};
    int size=15;

    cout<<"the number is : "<<number(arr,size);
}