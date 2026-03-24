#include<stdio.h>
int main(){
    int i,a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    while(b!=0){
      int temp = b;
      b = a%b;
      a = temp;
    }
    printf("HCF is:%d",a);
    return 0;
}