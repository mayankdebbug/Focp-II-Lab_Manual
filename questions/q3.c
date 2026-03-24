#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int sub = a + (~b+1);
    // if b = 4 than ,
    // internally it is stored like 00000100 and the first 0 it tells us that 
    //the number is +ve or -ve for 0 it is +ve for 1 it is -ve
    //so after giving  ~b(compliment) it is 11111011 
    //after adding 1 in this it is 11111100 which is -4
    printf("Subtract of %d and %d is: %d",a,b,sub);
    return 0;
}