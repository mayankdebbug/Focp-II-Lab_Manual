#include<stdio.h>
int main(){
    int n;
   printf("\nEnter the size of Array:");
   scanf("%d",&n);
    int arr[n];
    int even[n],odd[n];
    int evenscore = 0,oddscore = 0;
    printf("\nEnter the Numbers in array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]%2 == 0){
            even[evenscore] = arr[i];
            evenscore++;
        }else{
            odd[oddscore] = arr[i];
            oddscore++;
        }
    }
    printf("\nEven score is:");
    for(int i = 0;i<evenscore;i++){
         printf("%d ",even[i]);
    }
    printf("\nodd score is:");
        for(int i = 0;i<oddscore;i++){
         printf("%d ",odd[i]);
    }
    return 0;
}