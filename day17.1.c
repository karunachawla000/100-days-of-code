#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return (originalNum == reversedNum);
}
int main() {
    int n, m;
    printf("Enter the range (n and m) to find palindrome numbers: ");
    scanf("%d %d", &n, &m);
    int num = n;
    while (num <= m) {
        if (isPalindrome(num)) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");
    return 0;
}