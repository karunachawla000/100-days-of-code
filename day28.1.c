#include <stdio.h>
#include <stdbool.h>


bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int n, count = 0;

    printf("--- Prime Number Finder (1 to n) ---\n");
    printf("Enter the limit (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No prime numbers in this range.\n");
        return 0;
    }

    printf("\nPrime numbers between 1 and %d are:\n", n);
    
    
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No prime numbers found.\n");
    } else {
        printf("\n\nTotal primes found: %d\n", count);
    }

    return 0;
}