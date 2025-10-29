#include <stdio.h>
#include <string.h>

int main() {
    char binaryNum[32];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binaryNum);

    printf("1's complement: ");
    for (i = 0; i < strlen(binaryNum); i++) {
        if (binaryNum[i] == '0') {
            printf("1");
        } else if (binaryNum[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary input.\n");
            return 1;
        }
    }
    printf("\n");

    return 0;
}