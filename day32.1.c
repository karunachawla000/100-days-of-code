#include <stdio.h>

int main() {
    int size1, size2, total_size;

    if (scanf("%d", &size1) != 1 || size1 < 0) {
        return 1;
    }

    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &size2) != 1 || size2 < 0) {
        return 1;
    }

    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            return 1;
        }
    }

    total_size = size1 + size2;
    int arr_merged[total_size];
    int k = 0;

    for (int i = 0; i < size1; i++) {
        arr_merged[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < size2; i++) {
        arr_merged[k] = arr2[i];
        k++;
    }

    for (int i = 0; i < total_size; i++) {
        printf("%d ", arr_merged[i]);
    }
    printf("\n");

    return 0;
}
