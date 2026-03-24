#include <stdio.h>
#include <stdlib.h>
int main()
{int n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    // int *scores = (int*) malloc(n*sizeof(int));
    int *scores = (int*) calloc(n,sizeof(int));
    for (int i =0;i<n;i++){
        printf("\n enter the scores");
        scanf("%d",&scores[i]);
    }
    for(int i=0;i<n;i++){
        printf("\n the scores at %d is %d",i,scores[i]);
    }
    free(scores);
    return 0;
}