#include <stdio.h>

int main() {
    int size;
    int even_count = 0;
    int odd_count = 0;
    
    printf("--- Even and Odd Number Counter ---\n");
    
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

        if (element % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if (size > 0) {
        printf("Total Even numbers: %d\n", even_count);
        printf("Total Odd numbers: %d\n", odd_count);
    }

    return 0;
}