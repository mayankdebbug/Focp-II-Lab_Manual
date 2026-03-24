#include<stdio.h>
void factorial(int a){
    int f=1;
    for(int i=1; i<=a;i++){
        f=f*i;

    }

    printf("factorial is %d",f);}

    
    int main(){
        int n=7;
        factorial(n);
       
    }
