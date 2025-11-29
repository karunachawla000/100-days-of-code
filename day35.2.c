#include <stdio.h>
#include <stdlib.h>

// Helper function to reverse a subarray
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Main function to rotate the array
void rotate_right(int arr[], int n, int k) {
    // Handle cases where k is larger than n or negative
    if (n == 0 || k == 0) return;
    k = k % n;

    // Step 1: Reverse the last k elements (from index n - k to n - 1)
    reverse(arr, n - k, n - 1);

    // Step 2: Reverse the first n - k elements (from index 0 to n - k - 1)
    reverse(arr, 0, n - k - 1);

    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}

// Function to print the array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    print_array(arr, n);

    rotate_right(arr, n, k);

    printf("Array after rotating right by %d: ", k);
    print_array(arr, n);

    return 0;
}
