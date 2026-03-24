#include<stdio.h>
int main(){
    int n , count = 0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in Array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        int prime = 1;
        if(arr[i]<=1){
            prime = 0;
        }else{
          for(int j = 2;j*j<=arr[i];j++){
                if(arr[i]%j == 0){
                    prime = 0;
                    break;
                }
            }
        }
        if(prime){
            count++;
        }
    }
    printf("Total prime nos in array is:%d",count);
    return 0;
}