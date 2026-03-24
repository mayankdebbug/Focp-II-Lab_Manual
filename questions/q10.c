#include<stdio.h>
int main(){
    int target,i,n,count = 0;
    printf("Enter the Size and target:");
    scanf("%d%d",&n,&target);
      int arr[n];
      int a = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number in array:");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        if(target == arr[i]){
            printf("%d ",i);
            count++;
        }
    }
     printf("\ntotal no of students scorect %d is %d",target,count);
    return 0;
}