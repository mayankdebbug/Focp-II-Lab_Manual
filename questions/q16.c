#include<stdio.h>
int main(){
    int n, value, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array:");
 for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
}
    printf("\nArray before insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
  }
      printf("\nEnter value to insert: ");
       scanf("%d", &value);
        printf("Enter position:");
    scanf("%d", &pos);
       for (int i = n; i > pos; i--) {
           arr[i] = arr[i - 1];
 }
    arr[pos] = value;
   n++;
   printf("\nArray after insertion: ");
     for (int i = 0; i < n; i++) {
           printf("%d ", arr[i]);
    }
    return 0;
}