#include <stdio.h>
int main() {
    int arr1[10] = {3,7,9,2,3,7,9,7,2,3};
    int arr2[10] = {7,9,2,3,7,2,3,7,2,9};
    int arr3[10];
    int i;


    for (i = 0; i < 10; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("Contents of the arr3: ");
    for (i = 0; i < 10; i++) {
        printf("%d ",arr3[i]);
    }
    printf("\n");

    return 0;
}
