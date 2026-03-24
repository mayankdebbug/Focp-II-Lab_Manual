#include<stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int n;
    printf("Enter the No:");
    scanf("%d",&n);
    printf("Fibonnacci series of %d Numbers is:",n);
    for(int i = 0;i<=n;i++){
    int temp = a;
    a = a+b;
    b = temp;
    printf("%d ",b);
}
return 0;
}