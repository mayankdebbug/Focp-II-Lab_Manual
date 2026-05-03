#include<stdio.h>
int main(){
    int a = 10;
    int *p=&a;
    // char ch = 'z';
    // char *cp =&ch;
    printf("\n value of a : %d    address of a:%p",a,&a);
    printf("\n value of pointer p : %p    address of pointer p:%p",p,&p);
    printf("\n value pointed by pointer p : %d",*p);
    printf("\n sizeof a: %lu", sizeof(a));
    return 0;
}
