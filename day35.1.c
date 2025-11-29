#include <stdio.h>
#include <limits.h>

int find_second_largest(int arr[], int n) {
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
    if (n < 2) {
        return INT_MIN;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        return INT_MIN;
    }

    return second_largest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int second_largest;

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    second_largest = find_second_largest(arr, n);

    if (second_largest != INT_MIN) {
        printf("The second largest element is: %d\n", second_largest);
    } else {
        printf("Could not find a distinct second largest element.\n");
    }

    return 0;
}
