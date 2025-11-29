#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status result = SUCCESS;

    if (result == SUCCESS)
        printf("Operation Successful\n");
    else if (result == FAILURE)
        printf("Operation Failed\n");
    else if (result == TIMEOUT)
        printf("Operation Timed Out\n");

    return 0;
}
