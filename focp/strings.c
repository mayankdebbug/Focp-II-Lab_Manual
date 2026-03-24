#include<stdio.h>
#include<string.h>
int main(){
  char batch[] = "focp section c";
  char *b = "focp1 section c";
  printf("\n%s",batch);
  batch[14] = 'b';
  printf("\n%s",batch);
  return 0;
}