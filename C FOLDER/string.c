#include<stdio.h>
#include<string.h>
int main(){
    // char arr[]={'f','o','c','p','1','\0'};
    // char arr1[]="focp1";
    // printf("array is : %s",arr);
    // printf("\n array1 is : %s",arr1);
    // return 0;
//     char batch[20];
//     printf("enter batch name: ");
//     scanf("%s", batch);
//     printf("batch name is : %s", batch);
//     return 0;
// char batch[20];
// printf("enter batch name:");
// scanf("%[^\n]",batch);
// printf("batch name is : %s", batch);
// return 0;
// char batch[21];
// printf("enter batch name:");
// fgets(batch,21,stdin);
// printf("batch name is : %s", batch);
// return 0;
// char ch[]="focp1 section c";
// printf("sizeof ch %lu",sizeof(ch));
// printf("\nlength of ch : %lu",strlen(ch));
// return 0;
// char batch[20];
// printf("enter batch name:");
// scanf("%\[^c]",batch);
// printf("batch name is : %s", batch);
// return 0;
// char batch[20];
// printf("enter batch name:");
// scanf("%[^\n]",batch);
// printf("batch name is : %s", batch);
// return 0;
char batch[]="focp1 section c";
char *b="focp1 section c";
batch[14]='b';
printf("batch name is : %s", batch);
// b[14]='b';
// printf("batch name is : %s", b) will not show any change as string literals are immutable in C2;
return 0;


}