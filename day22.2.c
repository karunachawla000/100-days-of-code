#include <stdio.h>

int main() {
    int n, numerator = 1;
    float sum = 0.0f;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum = sum + (float)numerator / (numerator + 1);
        numerator += 2;
    }
    
    printf("Sum of the series is: %f\n", sum);
    
    return 0;
}
