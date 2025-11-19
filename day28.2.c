#include <stdio.h>

int main() {
    int arr[5]; 
    int i;
    int size = 5;

    printf("--- 1D Array Read and Print ---\n");
    
    
    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("\nElements stored in the array are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}