#include <stdio.h>

int main() {
    int size;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    printf("--- Positive, Negative, and Zero Counter ---\n");
    
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid input or size.\n");
        return 1;
    }

    int arr[size];

    for (int i = 0; i < size; i++) {
        int element;
        if (scanf("%d", &element) != 1) {
            printf("Error reading element.\n");
            return 1;
        }

        if (element > 0) {
            positive_count++;
        } else if (element < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    if (size > 0) {
        printf("Total Positive numbers: %d\n", positive_count);
        printf("Total Negative numbers: %d\n", negative_count);
        printf("Total Zeros: %d\n", zero_count);
    }

    return 0;
}
