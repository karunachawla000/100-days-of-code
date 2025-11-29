#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compare_dates_manual(struct Date d1, struct Date d2) {
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Date dateA = {10, 11, 2025};
    struct Date dateB = {10, 11, 2025};
    struct Date dateC = {11, 11, 2025};

    printf("--- Manual Comparison ---\n");
    if (compare_dates_manual(dateA, dateB)) {
        printf("dateA and dateB are identical.\n");
    } else {
        printf("dateA and dateB are different.\n");
    }

    if (compare_dates_manual(dateA, dateC)) {
        printf("dateA and dateC are identical.\n");
    } else {
        printf("dateA and dateC are different.\n");
    }

    return 0;
}