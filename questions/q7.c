#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i = 1;i<=n;i++){
        //print
     for(int j=1;j<=i;j++){
        printf("%d ",(j+1)%2);
         }
    //Spaces
    for(int j=1;j<=2*(n-i);j++){
        printf("  ");
    }
    //Print
    for(int j=1;j<=i;j++){
        printf("%d ",(j+1)%2);
    }
    printf("\n");
}
return 0;
}