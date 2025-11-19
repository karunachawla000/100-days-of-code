#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    
    printf("--- Array Max and Min Finder ---\n");
    
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

        if (element > max_val) {
            max_val = element;
        }

        if (element < min_val) {
            min_val = element;
        }
    }

    if (size > 0) {
        printf("Maximum element: %d\n", max_val);
        printf("Minimum element: %d\n", min_val);
    }

    return 0;
}