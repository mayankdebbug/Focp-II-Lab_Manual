#include<iostream>
using namespace std;

// bool target(int arr[], int size, int target){
//     for(int i=0;i<size;i++){
       
//        if(arr[i] == target)
//         { return true;}


       
//     }return false;
// }

// int largest(int arr[],int size){
// int current=arr[0];
//     for(int i=0;i<size;i++){
        
//           if(current<arr[i]){
//             current=arr[i];
//         }
        
//     }return current;
    
// }


// int main(){

// //     int arr[]={1,2,3,44,55,33,23};
// //     int size = 7;
// // int targeti = 1;
// // bool ans= target(arr,size,targeti);
// // cout<<"ans"<<ans;
// int arr[]={222,23,44,33,23,12,34,23,4};
// int size=9;



// cout<<"largest is: "<<largest(arr,9)<<endl;

// return 0;
// }

// int main(){
//     int m,n;
//     int arr[]={1,0,0,0,0,1,1,0,1,0,1,0,1,1};
//     int size=14;
// m=0;
// n=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==1){
//             m=m+1;
//         }else if(arr[i]==0){
//             n=n+1;
//         }else{ cout<<"array also contains non zero/one values: "<<arr[i];};
//     }
//     cout<<"number of 0s: "<<n<<" no of 1s: "<<m;
// }

void extremepoints(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
      if(i==j){
        cout<<arr[i];
        i++;
      }else{
          cout<<arr[i];
        i++;
        cout<<arr[j];
        j--;
        
      }
      
    }
}
int main(){

    int arr[]={1,2,3,4,5,6,7};
    int size=7;

    extremepoints(arr,size);
}