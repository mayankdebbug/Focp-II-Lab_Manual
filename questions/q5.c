#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the Coordinated in (x,y) form:");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0){
        printf("Quadrant 1");
    }else if(x<0 && y>0){
        printf("Quadrant 2");
    }else if(x<0 && y<0){
        printf("Quadrant 3");
    }else{
        printf("Quadrant 4");
    }
    return 0;
}