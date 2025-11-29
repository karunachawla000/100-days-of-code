#include <stdio.h>

void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int size;

    if (scanf("%d", &size) != 1 || size <= 0) {
        return 1;
    }

    int arr[size];

    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    reverse_array(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
