#include <stdio.h>

int main() {
    int size;
    long long sum = 0;
    
    printf("--- Array Sum Finder ---\n");
    
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

        sum += element;
    }

    printf("%lld\n", sum);

    return 0;
}