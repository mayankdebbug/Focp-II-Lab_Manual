#include<stdio.h>
int main(){
    int n, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter position to delete:");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("\nArray after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}