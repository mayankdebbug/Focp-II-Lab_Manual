// #include<stdio.h>
// int main()
// {
//     int max,i,max2=-1;
//     int A[]={20,20,20,20,20,20,20,20};
//     max= A[0];
//     for (i=1;i<8;i++)
//     {
//         if(max<A[i])
//         {
//             max2 = max;
//             max = A[i];
//         }
//         else if (max2<A[i]&& A[i]!=max)
//         {
//             max2 = A[i];
//         }
//     }
//     if (max2==-1)
//     {
//         printf("no second max value");
//     }

//     printf("\n the max value of array is %d",max);

// }

// #include<stdio.h>
// int main()
// {
//     int r,c;
//     int a[3][3];
//     printf("enter elements");
//     for (r=0;r<3;r++)
//     {
//         for(c=0;c<3;c++)
//         {
//             scanf("%d",&a[r][c]);
//         }
//     }
//     printf("PRINTING!!!");
//  for (r=0;r<3;r++)
//  {
//     printf("\n");
//  for (c=0;c<3;c++)
//  {
//     printf(" %d ",a[r][c]);
//  }
// }
// return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     int a[4][4];
//     printf("enter elements");
//     for (r=0;r<4;r++)
//     {
//         for(c=0;c<4;c++)
//         {
//             scanf("%d",&a[r][c]);
//         }
//     } }
#include<stdio.h>
int main(){
    int k=0 ,i=0;
    int nums[]={2,3,4,5,6,8,22,3,3,56};
    int target;
    printf("enter the target value");
    scanf("%d",&target);
    for(int i;i<10;i++){
        if(nums[i]!=target){
            nums[k++]=nums[i];
        }
    }
    printf("the new array");
    for(i=0;i<k;i++){
        printf(" %d ",nums[i]);
    }
}