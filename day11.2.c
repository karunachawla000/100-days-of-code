#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Profit: %.2f\n", profitLoss);
        printf("Profit percentage: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        profitLoss = costPrice - sellingPrice;
        percentage = (profitLoss / costPrice) * 100;
        printf("Loss: %.2f\n", profitLoss);
        printf("Loss percentage: %.2f%%\n", percentage);
    } else {
        printf("Neither profit nor loss.\n");
    }

    return 0;
}