
#include <stdio.h>

int main() {
    int n, x, total, leftSum;
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;
        if (leftSum == total - leftSum + x) {
            printf("%d", x);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
