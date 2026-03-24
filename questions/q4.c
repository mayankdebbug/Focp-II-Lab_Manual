#include<stdio.h>
void swap(int *g,int *h){
  int change = *g;
      *g = *h;
      *h = change;
      printf("g=%d and h=%d\n",*g,*h);
}
int main(){
    int a = 5,b = 10;
   //using temp variable
  int temp = a;
   a = b;
   b = temp;
   printf("a=%d and b=%d\n",a,b);


   //using Arithmetic
   int c = 6,d = 9;
   c = c+d;
   d = c-d;
   c = c-d;
    printf("c=%d and d=%d\n",c,d);
   


   //using XOR
   int e = 4,f = 1;
   e = e^f;
   f = e^f;
   e = e^f;
   printf("e=%d and f=%d\n",e,f);


    //using pointer manipulation
    int g = 15,h = 13;
    swap(&g,&h);
    return 0;
}