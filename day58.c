

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int answer[n];
    for(int i = 0; i < n; i++) {
        int product = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }
    
    printf("Output array:");
    for(int i = 0; i < n; i++) {
        printf("%d,", answer[i]);
    }
    printf("\n");
    
    return 0;
}
