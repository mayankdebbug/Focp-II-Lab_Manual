#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the Size:");
    scanf("%d",&n);
      int arr[n];
      int a = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the numbers in array:");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
   int max = arr[0];
   int min = arr[0];
   for(i=0;i<n;i++){
    if(max<arr[i]){
        max = arr[i];
    }
     if(min>arr[i]){
        min = arr[i];
    }
   }
   printf("The maximum is %d and Minimum is %d",max,min);
   return 0;
}