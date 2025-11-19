#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    int count[10] = {0};
    int max_count = -1;
    int most_frequent_digit = -1;
    long long temp_n;
    int digit;

    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    temp_n = llabs(n);

    while (temp_n > 0) {
        digit = temp_n % 10;
        count[digit]++;
        temp_n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }

    printf("%d\n", most_frequent_digit);

    return 0;
}
