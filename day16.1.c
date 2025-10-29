#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, bits, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Binary representation is not defined for negative numbers in this context.\n");
        return 1;
    }
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    temp = n;
    bits = 0;
    while (temp > 0) {
        temp /= 2;
        bits++;
    }

    for (i = bits - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
