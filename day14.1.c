#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter the number of odd numbers (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}