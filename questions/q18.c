#include<stdio.h>
int main(){
     int n;
   printf("\nEnter the size of Array:");
   scanf("%d",&n);
    int arr[n];
    printf("\nEnter the Numbers in array:");
        for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are:");
    int found=0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;i<n;i++){
            if(arr[i] == arr[j]){
                printf("%d ",arr[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}