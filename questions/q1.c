#include<stdio.h>
#include<math.h>
//Armstrong Number
int main(){
  int i,n,rem,count=0,arm=0;
  printf("Enter the No:");
  scanf("%d",&n);
  int original = n;
  while(n>0){
       n = n/10;
       count++;
  }
 n = original;
  while(n>0){
     rem = n%10;
     n /= 10;
     arm = arm + pow(rem,count);
  }
  if(arm == original){
    printf("The number is armstrong");
  }else{
    printf("The Number is not armstrong");
  }
  return 0;
}