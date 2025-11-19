#include <stdio.h>

int main() {
    int n, x, pos = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    while (pos < n && arr[pos] < x) pos++;

    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];

    arr[pos] = x;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);

    return 0;
}
