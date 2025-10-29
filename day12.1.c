#include <stdio.h>

int main() {
    int daysLate;
    double fine = 0.0;

    printf("Enter the number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        fine = 0.0;
        printf("No fine. Book returned on time or early.\n");
    } else if (daysLate <= 5) {
        fine = daysLate * 2.0;
        printf("Fine: ₹%.2f\n", fine);
    } else if (daysLate <= 10) {
        fine = (5 * 2.0) + ((daysLate - 5) * 4.0);
        printf("Fine: ₹%.2f\n", fine);
    } else if (daysLate <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((daysLate - 10) * 6.0);
        printf("Fine: ₹%.2f\n", fine);
    } else {
        printf("Membership Cancelled due to more than 30 days late.\n");
    }

    return 0;
}