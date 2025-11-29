#include <stdio.h>

int main() {
    enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

    for (int m = JAN; m <= DEC; m++) {
        if (m == FEB)
            printf("February has 28 or 29 days\n");
        else if (m == APR || m == JUN || m == SEP || m == NOV)
            printf("%d has 30 days\n", m);
        else
            printf("%d has 31 days\n", m);
    }

    return 0;
}
